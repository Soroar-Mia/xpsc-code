#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector < ll > v(n+1), rotated(n+1);

        for(ll i = 1 ; i <= n ; i++)
        {
            cin>>v[i];
        }
        if(v[1] != n)
        {
            cout<<"NO"<<endl;
            continue;
        }
        for(ll i = 1 ; i <= n ; i++)
        {
            rotated[v[i]]++;
        }
        for(ll i = n-1 ; i >= 1 ; i--)
        {
            rotated[i]+=rotated[i+1];
        }
        if(rotated == v)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
