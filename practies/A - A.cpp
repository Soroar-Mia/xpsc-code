///******** Bismillahir Rahmanir Rahim *******

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int a,b,c,x;
    cin>>a>>b>>c>>x;
    int man=b-a;
    float tsart=(float)c/man;
    if(a>x)
    {
        cout<<1<<endl;
    }
    else if(b<x)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<tsart<<endl;
    }

    return 0;
}
