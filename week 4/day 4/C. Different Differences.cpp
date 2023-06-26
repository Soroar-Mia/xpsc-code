#include <iostream>
#include <vector>

using namespace std;

vector<int> constructArray(int k, int n) {
    vector<int> arr(k);
    int curr = 1;
    for (int i = 0; i < k - 1; i++) {
        arr[i] = curr++;
    }
    arr[k - 1] = n;
    return arr;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k, n;
        cin >> k >> n;

        vector<int> result = constructArray(k, n);

        for (int i = 0; i < k; i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
