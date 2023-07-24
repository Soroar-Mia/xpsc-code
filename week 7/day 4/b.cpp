///*******Bismillahir Rahmanir Rahim********

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n;
    ll a,c = 0,d = 0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(a % 2 == 1)
        {
            d++;
        }
    }
    c = min(d,n-d);
    cout<<c<<endl;

    return 0;
}
