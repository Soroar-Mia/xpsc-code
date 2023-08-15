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
        ll arr[n];
        ll brr[n];
        ll mx=LONG_LONG_MIN;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            mx=max(mx,arr[i]);
        }
        brr[n-1]=arr[n-1];
        for(int i=n-2; i>=0; i--)
        {
            brr[i]=max(arr[i],brr[i+1]);
        }
        bool ok=false;
        set<ll>st;
         for(int i=0; i<n; i++)
        {
            if(ok==true&&brr[i]!=mx)
            {
                st.insert(brr[i]);
            }
            if(brr[i]==mx)
            {
                ok=true;
            }

        }
        cout<<st.size()<<"\n";
    }
    return 0;
}
