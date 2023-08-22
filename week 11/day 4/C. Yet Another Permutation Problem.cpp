#include<bits/stdc++.h>
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

        set<int>v;
        for(ll i=2; i<=n; i++)v.insert(i);

        cout<<1<<" ";
        while(!v.empty())
        {

            ll first=*v.begin();
            v.erase(v.begin());
            cout<<first<<" ";

            for(ll j=first*2; j<=n; j+=j)
            {
                cout<<j<<" ";
                v.erase(j);

            }

        }

        cout<<endl;


    }


}
