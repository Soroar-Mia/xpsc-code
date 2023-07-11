//Bismillahir Rahmanir Rahim

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
        while(n%2==0)
        {
            n = n/2;
        }
        if(n>1)
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}

