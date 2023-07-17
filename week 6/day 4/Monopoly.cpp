
///********Bismillahir Rahmanir Rahim ********
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if((a+b+c)<d)
        {
            cout<<"YES"<<endl;
        }
        else if((a+b+d)<c)
        {
            cout<<"YES"<<endl;
        }
        else if((a+c+d)<b)
        {
            cout<<"YES"<<endl;
        }
        else if((b+c+d)<a)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}



