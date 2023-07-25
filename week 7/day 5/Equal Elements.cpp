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
        ll n;
        cin>>n;
        int a[n];
        map<int,int>m;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        ll mx=INT_MIN;
        for(auto i:m)
        {
            ll des=i.second;
            if(des>mx)
            {
                mx=des;
            }
        }
        ll ans=n-mx;
        cout<<ans<<endl;
    }
    return 0;
}

