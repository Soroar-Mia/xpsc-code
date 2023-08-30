#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t, a, b, n;

    cin>>t;

    for(; t--;)
    {
        cin>>n>>a>>b;

        if(a==n && b==n)
        {
            cout<<"YES"<<endl;
        }
        else if(a+b<n-1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
