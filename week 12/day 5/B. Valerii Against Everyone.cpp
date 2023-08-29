#include<bits/stdc++.h>
#define ll              long long
#define pb              push_back
using namespace std;

int main()
{
    ll t,n,b;
    cin>>t;
    while(t--)
    {
        map<ll,ll>mp;
        map<ll,ll>:: iterator itr;
        cin>>n;
        for(ll i=0; i<n; i++)
        {
            cin>>b;
            mp[b]++;
        }
        bool flag = false;
        for(itr=mp.begin(); itr!= mp.end(); itr++)
        {
            if(itr->second > 1)
            {
                flag = true;
            }
        }
        if(flag == true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
