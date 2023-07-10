
//Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
#define ll              long long
using namespace std;

int main()
{
    ll t ;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n%2==0)
        {
            cout<<(n/2)-1<<endl;
        }
        else
        {
            cout<<n/2<<endl;
        }
    }

    return 0;
}

