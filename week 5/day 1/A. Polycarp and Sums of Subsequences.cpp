#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t, b[7], i, j, k;

    cin>>t;

    for(; t--;)
    {
        cin>>b[0]>>b[1]>>b[2]>>b[3]>>b[4]>>b[5]>>b[6];

        cout<<b[0]<<" "<<b[1]<<" ";

        if(b[0]+b[1]==b[2])
        {
            cout<<b[3]<<"\n";
        }
        else
        {
            cout<<b[2]<<"\n";
        }
    }
}
