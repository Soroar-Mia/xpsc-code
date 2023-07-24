///*******Bismillahir Rahmanir Rahim********

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        ll n,m,index;
        cin>>n>>m;

        if (m % 10 == 0)
        {
            index = 0;
        }
        else if (m % 5 == 0)
        {
            index = 25;
        }
        else if (m % 2 == 0)
        {
            index = 40;
        }
        else
        {
            index = 45;
        }

        ll p = n / (m*10);
        ll d = p * index;

        for (ll i=(p*m*10)+m; i<=n; i+=m)
        {
            d += i % 10;
        }

        cout<<d<<endl;
    }

    return 0;
}
