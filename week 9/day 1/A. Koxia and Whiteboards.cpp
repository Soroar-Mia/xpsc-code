///*******Bismillahir Rahmanir Rahim *******
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<ll> a(n);
        vector<ll> b(m);
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(ll i=0; i<m; i++)
        {
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<int>());
        ll sum=0;
        if(n<=m)
        {
            for(ll i=0; i<n; i++)
            {
                sum +=b[i];
            }
        }
        else
        {
            for(ll i=0; i<m; i++)
            {
                sum +=b[i];
            }
            for(ll i=m; i<n; i++)
            {
                sum +=a[i];
            }
        }
        cout<<sum<<endl;
    }
}
