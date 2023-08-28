#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll   long long


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll cnt=0,ans=0,sum=0;
        vector<ll> a(5);
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
        }


        ans=(a[0]+a[1]+a[2])/2;
        ans=min(ans, a[0]+a[1]);
        ans=min(ans, a[0]+a[2]);
        ans=min(ans, a[2]+a[1]);
        cout<<ans<<endl;

    }

    return 0;
}
