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
int row[] = {1,0,-1,0};
int col[] = {0,1,0,-1};
const int mod = 1e9 + 7;



void solve()
{

    int n;
    cin>>n;

    int ans = 0;
    forn(k,0,n)
    {

        int sum = 0;
        int maxS = 0;
        forn(i,1,n+1)
        {

            if(i <= k)
            {
                sum += i*i;
                maxS = max(maxS, i*i);

            }
            else
            {

                sum += (n + k+1 - i) * i;
                maxS = max(maxS, (n + k+1 - i) * i);
            }
        }
        ans = max(ans, sum-maxS);
    }
    cout<<ans<<'\n';
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
