
///********Bismillahir Rahmanir Rahim ********
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        ll b[n];
        for(ll i=0; i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0; i<n;i++)
        {
            if(a[i]==0)
            {
                b[i]=1;
            }
            else
            {
                b[i]=0;
            }
        }
        for(ll i=0; i<n;i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

