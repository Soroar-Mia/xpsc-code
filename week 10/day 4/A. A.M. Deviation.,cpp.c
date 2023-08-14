#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ll t, a1, a2, a3, sum;

    cin>>t;

    for(;t--;)
    {
        cin>>a1>>a2>>a3;

        sum=abs(a1+a3-2*a2);

        if((sum%3)==0)
        cout<<"0\n";
        else
        cout<<"1\n";
    }
}
