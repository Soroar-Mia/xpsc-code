///*******Bismillahir Rahmanir Rahim********
///*** Read in the name of Allah, who created you ****
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        sort(a.begin(),a.end());
        ll ans=0,cons=0,mx=0;
        for(int i=0; i<n; i++)
        {
            cons++;
            if(i==n-1 or abs(a[i+1]-a[i])>k)
            {
                mx=max(mx,cons);
                cons=0;
            }
        }
        ans=n-mx;
        cout<<ans<<endl;
    }
    return 0;
}
