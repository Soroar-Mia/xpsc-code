///*******Bismillahir Rahmanir Rahim********
///*** Read in the name of Allah, who created you ****
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(1900 <= n)
        {
            cout<<"Division 1"<<endl;
        }
        else if(1600<= n && n <=1899)
        {
            cout<<"Division 2"<<endl;
        }
        else if(1400<= n && n <=1599)
        {
            cout<<"Division 3"<<endl;
        }
        else if(n <=1899)
        {
            cout<<"Division 4"<<endl;
        }
    }
    return 0;
}


