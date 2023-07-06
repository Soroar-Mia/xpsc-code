#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string t;
        cin >> t;
        int n = s.size();
        int m = t.size();

        if (t.size() == 1) {
            if (t[0] == 'a') {
                cout << 1 << endl;
            } else {
                long long int ans = (1LL << n);
                cout << ans << endl;
            }
        } else {
            if (count(t.begin(), t.end(), 'a') > 0) {
                cout << -1 << endl;
            } else {
                long long int ans = (1LL << n);
                cout << ans << endl;
            }
        }
    }
    return 0;
}
