#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

const int MAX_TYPES = 200005; // Maximum number of potion types

vector<int> minCoinsToObtain(const vector<vector<int>>& mix, const vector<int>& costs, const vector<int>& have, int n) {
    vector<int> minCoins(n, INT_MAX);
    vector<bool> visited(n, false);

    for (int type : have) {
        minCoins[type - 1] = 0;
    }

    queue<int> q;

    for (int type : have) {
        if (mix[type - 1][0] == 0) {
            q.push(type);
            visited[type - 1] = true;
        }
    }

    while (!q.empty()) {
        int currentType = q.front();
        q.pop();

        for (int i = 1; i <= mix[currentType - 1][0]; ++i) {
            int requiredType = mix[currentType - 1][i];
            if (!visited[requiredType - 1]) {
                visited[requiredType - 1] = true;
                q.push(requiredType);
                minCoins[requiredType - 1] = min(minCoins[requiredType - 1], minCoins[currentType - 1]);
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        if (minCoins[i] != INT_MAX) {
            minCoins[i] = min(minCoins[i], costs[i]);
        }
    }

    return minCoins;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> costs(n);
        vector<int> have(k);
        vector<vector<int>> mix(n, vector<int>());

        for (int i = 0; i < n; ++i) {
            cin >> costs[i];
        }

        for (int i = 0; i < k; ++i) {
            cin >> have[i];
        }

        for (int i = 0; i < n; ++i) {
            int m;
            cin >> m;
            mix[i].resize(m + 1);
            mix[i][0] = m;

            for (int j = 1; j <= m; ++j) {
                cin >> mix[i][j];
            }
        }

        vector<int> minCoins = minCoinsToObtain(mix, costs, have, n);

        for (int i = 0; i < n; ++i) {
            cout << minCoins[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
