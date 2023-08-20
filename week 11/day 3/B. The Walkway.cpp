#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <iostream>
#include <bits/stdc++.h>
// #include "utilities.cpp"
using namespace std;
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define forn(i, x, n) for (int i = x; i < n; i++)
#define vi vector<int>
#define vpp vector<pair<int,int>>
#define vs vector<string>
#define vll vector<long long>
// int row[] = {1,0,-1,0};
// int col[] = {0,1,0,-1};
const int mod = 998244353;

int f(int x, int y, int d)
{
    bool e = ((y - x) % d) == 0;
    return (y - x) / d + 1 - e;
}

void solve()
{

    int n, m, d;
    cin >> n >> m >> d;

    vector<int> arr(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> arr[i];
    }

    int start = 0;
    if (arr[0] != 1)
    {
        start = 1;
        arr.insert(arr.begin(), 1);
    }
    arr.push_back(n + 1);
    n = arr.size();
    int ans = 0;
    for (int i = 1; i < n; ++i)
    {
        ans += f(arr[i-1], arr[i], d);
    }
    int a2 = ans;
    int newans = ans;
    for (int i = 1; i < n-1; ++i)
    {
        int cur = f(arr[i-1], arr[i+1], d) - f(arr[i-1], arr[i], d) - f(arr[i], arr[i+1], d);
        newans = a2 + cur;
        ans = min(ans, newans);
    }
    int cnt = 0;
    for (int i = 1; i < n - 1; ++i)
    {
        int cur = f(arr[i-1], arr[i+1], d) - f(arr[i-1], arr[i], d) - f(arr[i], arr[i+1], d);
        newans = a2 + cur;
        if (newans == ans) cnt += 1;
    }
    if (ans == a2 && start == 0)
    {
        cnt += 1;
    }
    cout << ans << " " << cnt << endl;

}


signed main()
{

    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;

}
