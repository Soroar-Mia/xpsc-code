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

void solve(){

    int n;
    cin>>n;

    vi a(n), b(n);
    forn(i,0,n) cin>>a[i];
    forn(i,0,n) cin>>b[i];

    vi ans(n);
    forn(i,0,n){
        ans[i] = a[i]-b[i];
    }
    int maxi = *max_element(all(ans));

    vi res;
    forn(i,0,n){
        if(ans[i] == maxi) res.pb(i+1);
    }
    cout<<res.size()<<'\n';
    for(auto i: res) cout<<i<<' ';
        cout<<'\n';
}

signed main(){

    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;

}
