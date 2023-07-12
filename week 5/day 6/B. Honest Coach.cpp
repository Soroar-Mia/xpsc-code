//Bismillahir Rahmanir Rahim

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll mx=10000000;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(ll i=0;i<n-1; i++)
        {
            ll j=i+1;
            ll ans=a[j] -a[i];
            mx=min(ans,mx);

        }
        cout<<mx<<endl;
    }
    return 0;
}



