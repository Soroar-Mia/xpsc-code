#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct Monster {
    int health;
    int index;

    bool operator<(const Monster& other) const {
        return health < other.health || (health == other.health && index > other.index);
    }
};

vector<int> orderOfMonsterDeaths(int n, int k, vector<int>& healthPoints) {
    priority_queue<Monster> pq;
    for (int i = 0; i < n; ++i) {
        pq.push({healthPoints[i], i + 1});
    }

    vector<int> deathOrder;
    while (!pq.empty()) {
        Monster current = pq.top();
        pq.pop();
        if (current.health <= 0) {
            continue;
        }
        deathOrder.push_back(current.index);
        current.health -= k;
        pq.push(current);
    }

    reverse(deathOrder.begin(), deathOrder.end());
    return deathOrder;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> healthPoints(n);
        for (int i = 0; i < n; ++i) {
            cin >> healthPoints[i];
        }

        vector<int> deathOrder = orderOfMonsterDeaths(n, k, healthPoints);
        for (int i = 0; i < n; ++i) {
            cout << deathOrder[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
