#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int minI(vector<ll>& dishes) {
    ll n = dishes.size();
    ll count = 0;

    for (ll i = 0; i < n - 2; i++) {
        ll sum = dishes[i] + dishes[i + 1] + dishes[i + 2];
        if (sum % 3 != 0) {
            ll remainder = sum % 3;
            count += 3 - remainder;
            dishes[i + 2] += 3 - remainder;
        }
    }

    return count;
}

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<ll> dishes(n);
        for (ll i = 0; i < n; i++) {
            cin >> dishes[i];
        }

        ll minIncrementsN = minI(dishes);
        cout << minIncrementsN << endl;
    }

    return 0;
}
