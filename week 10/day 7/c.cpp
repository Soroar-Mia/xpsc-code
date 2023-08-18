#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int ans = 0;
    set<int> a, b; // Use "set<int>" instead of "<int>"
    b.insert(arr[0]);
    for (int i = 1; i < n; i++)
    {
        int r = distance(a.begin(), a.lower_bound(arr[i]));
        int rr = distance(b.begin(), b.lower_bound(arr[i]));
        if (r == 0 && rr != 0)
        {
            a.insert(arr[i]);
            ans++;
        }
        b.insert(arr[i]);
    }
    cout << ans << "\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0; // Added return statement
}
