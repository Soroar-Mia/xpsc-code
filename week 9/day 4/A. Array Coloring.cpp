#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Fenwick Tree implementation
class FenwickTree {
public:
    explicit FenwickTree(int n) : tree(n + 1, 0) {}

    void update(int idx, int val) {
        for (; idx < tree.size(); idx += (idx & -idx)) {
            tree[idx] += val;
        }
    }

    int query(int idx) {
        int sum = 0;
        for (; idx > 0; idx -= (idx & -idx)) {
            sum += tree[idx];
        }
        return sum;
    }

private:
    vector<int> tree;
};

// Function to solve the problem for each test case
void solveTestCase() {
    int n;
    cin >> n;

    vector<int> points(n);
    for (int i = 0; i < n; ++i) {
        cin >> points[i];
    }

    vector<int> sortedPoints(points);
    sort(sortedPoints.begin(), sortedPoints.end());

    FenwickTree fenwickTree(n);

    vector<int> ans(n);
    for (int i = 0; i < n; ++i) {
        int idx = lower_bound(sortedPoints.begin(), sortedPoints.end(), points[i]) - sortedPoints.begin() + 1;
        ans[i] = fenwickTree.query(n) - fenwickTree.query(idx - 1);
        fenwickTree.update(idx, 1);
    }

    for (int i = 0; i < n; ++i) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solveTestCase();
    }

    return 0;
}
