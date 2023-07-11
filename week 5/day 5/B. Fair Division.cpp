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
        ll n,two=0,one=0;
        cin>>n;
        for(ll i=0; i<n; i++)
        {
            int n;
            cin>>n;
            if(n==2)
            {
                two++;
            }
            if(n==1)
            {
                one++;
            }
        }
        if(one==1 || (one>1 && one % 2 !=0))
        {
            cout<<"NO"<<endl;
            continue;
        }
        if((two==1 || (two>1 && two % 2 !=0)) && one==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
    }
    return 0;
}


