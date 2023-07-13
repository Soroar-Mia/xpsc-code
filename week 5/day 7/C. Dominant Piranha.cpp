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
        ll n,mx=-1;
        cin>>n;
        ll a[n+10];
        for(ll i=1; i<=n; i++)
        {
            cin>>a[i];
            mx=max(mx,a[i]);

        }
        ll ans=-1;
        for(ll i=1; i<=n; i++)
        {
            if(a[i] == mx)
            {
                if((a[i] != a[i-1]) && i >1)
                {
                    ans=i;
                    break;
                }
                if((a[i] != a[i+1]) && i <n)
                {
                    ans=i;
                    break;
                }
            }
        }
        cout<<a[ans]<<endl;
    }
}
