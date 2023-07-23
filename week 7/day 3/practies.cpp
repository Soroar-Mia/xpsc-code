///*****Bismillahir Rahamanir Rahim*********

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> OS;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> OMS;



int main()
{
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n+1,0);
    for(ll i=1;i<=n; i++)
    {
        cin>>a[i];
    }
    vector<ll>aa(n+1,0);

    for(int i=1;i<=n; i++)
    {
        aa[i]=a[i] + aa[i-1];
    }


    vector<pair<int,int>>b(m);
    for(int i=1;i<=m; i++)
    {
        cin>>b[i].first;
        b[i].second=i;
    }

    for(int i=1;i<=m; i++)
    {
        cout<<b[i].first<<" --"<<b[i].second<<endl;
    }

    return 0;
}

