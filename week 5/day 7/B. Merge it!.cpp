//******** Bismillahir rahmanir rahim ***********

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,mx=-1,ans=0;
        cin>>n;
        vector<ll> a;
        for(ll i=0; i<n; i++)
        {
            int c;
            cin>>c;
            if(c % 3==0)
            {
                ans++;
            }
            else
            {
                a.push_back(c);
            }
        }
        int nn=a.size();
        for(ll i=0; i<nn; i++)
        {

        }

    }
}

