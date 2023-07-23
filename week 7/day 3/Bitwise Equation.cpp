///*****Bismillahir Rahamanir Rahim*********

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        ll a = 1, b = 2, c,d=0;
        for(ll c = 3; c<=1e6; c++)
        {
            ll d = n^c;
            if(c == d || d<=2)continue;
            break;
        }
        if(d==0)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        }

    }
    return 0;
}


