//Bismillahir Rahmanir Rahim

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll a,b,x,y,aa,bb;
    cin>>a>>b>>x>>y;
    aa=(a*2) + b;
    bb = (x*2) + y;

    if(aa>bb)
    {
        cout<<"Messi"<<endl;
    }
    else if(aa<bb)
    {
        cout<<"Ronaldo"<<endl;
    }
    else
    {
        cout<<"Equal"<<endl;
    }

    return 0;
}


