///*******Bismillahir Rahmanir Rahim********
///*** Read in the name of Allah, who created you ****
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll w=n*m;
        if(n<=8 && w<=500)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}



