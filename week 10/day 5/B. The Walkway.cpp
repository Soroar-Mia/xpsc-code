#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> l0(n + 1, 0); // Maximum consecutive oaks
        vector<int> l1(n + 1, 0); // Maximum consecutive firs

        for (int i = 1; i <= n; ++i) {
            l0[i] = (s[i - 1] == '0') ? l0[i - 1] + 1 : 0;
            l1[i] = (s[i - 1] == '1') ? l1[i - 1] + 1 : 0;
        }

        for (int a = 1; a <= n; ++a) {
            int max_beauty = 0;

            for (int i = 0; i <= min(k, n); ++i) {
                int beauty = a * max(l0[n] - l0[n - i], l1[n] - l1[n - i]) + l1[n - i];
                max_beauty = max(max_beauty, beauty);
            }

            cout << max_beauty << " ";
        }

        cout << endl;
    }

    return 0;
}
