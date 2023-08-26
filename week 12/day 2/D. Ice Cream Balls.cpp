#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    ll t=1;
    cin>>t;

    cout<<setprecision(16);
    for(int i=1; i<=t; i++)
    {

        ll n;
        cin>>n;

        ll l=1,h=1e10,ans=1;
        while(l<=h)
        {
            ll mid=(l+h)/2;

            ll k=(mid*(mid-1)/2);

            if(k<=n) ans=max(ans,mid),l=mid+1;
            else h=mid-1;
        }

        ll k=ans*(ans-1)/2;
        cout<<ans+(n-k)<<endl;
    }

    return 0;
}

