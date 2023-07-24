///******Bismillahir Rahmanir Rahim*******
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        float aa=100 - (100 * a / 100);
        float bb=200 - (200 * b / 100);
        if(aa < bb)
        {
            cout<<"FIRST"<<endl;
        }
        else if(aa > bb)
        {
            cout<<"SECOND"<<endl;
        }
        else if(aa == bb)
        {
            cout<<"BOTH"<<endl;
        }
    }
}
