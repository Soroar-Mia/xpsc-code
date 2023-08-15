#include <iostream>
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
        cin>>n;
        bool f=true;
        ll ans=1;
        ll arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        if(arr[0]==1)ans++;
        for(int i=1; i<n; i++)
        {
            if(arr[i]==0)
            {
                if(arr[i]==arr[i-1])
                {
                    f=false;
                    break;
                }
            }
            else
            {
                if(arr[i]==arr[i-1])
                    ans+=5;
                else ans++;
            }
        }
        if(f)
            cout<<ans<<"\n";
        else cout<<"-1\n";
    }
    return 0;
}
