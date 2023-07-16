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
        int a;
        cin>>a;
        string s;

        if(a%2==0 && a%7==0)
        {
            cout<<"Alice"<<endl;
        }
        else if(a%2 !=0 && a%9==0)
        {
            cout<<"Bob"<<endl;
        }
        else
        {
            cout<<"Charlie"<<endl;
        }
    }
    return 0;
}

