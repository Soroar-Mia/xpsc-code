///*******Bismillahir Rahmanir Rahim********
///*** Read in the name of Allah, who created you ****
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    ll mod=1e9+7;
    while(t--)
    {
        int n;
        cin>>n;
        int x=0;
        ll y=1;
        map<ll,ll>mp;
        for(int i=1; i<=n; i++)
        {
            ll a;
            cin>>a;
            mp[a]++;
        }
        for(int i=1;; i++)
        {
            if(mp[i]>0)
            {
                y=((mp[i]*y)%mod);
                x=(x+y)%mod;
            }
            else
            {
                break;
            }
        }
        cout<<x<<endl;
    }
}




