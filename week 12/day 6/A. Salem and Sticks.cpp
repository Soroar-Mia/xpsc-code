#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll    long long


int main()
{
    ll i,n,x,j,tmp=0;

    ll ans=10000000;
    cin>>n;
    ll  a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }


    for(i=1; i<=100; i++)
    {
        tmp=0;
        for(j=0; j<n; j++)
        {
            ll d=abs(a[j]-i );
            if(d>=1)tmp+=d-1;
        }
        if(tmp<ans)
        {
            ans=tmp,x=i;
        }
    }
    cout<<x<<" "<<ans<<endl;

    return 0;
}
