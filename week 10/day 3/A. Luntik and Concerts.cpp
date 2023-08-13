#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    ll t, a, b, c, sum;

    cin>>t;

    for(; t--;)
    {
        cin>>a>>b>>c;

        sum=a+2*b+3*c;

        if((sum%2)==0)
        {
            cout<<"0\n";
        }
        else
        {
            cout<<"1\n";
        }
    }
}
