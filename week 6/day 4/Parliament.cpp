
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
        int n,k,hf=0;
        cin>>n>>k;
        if(n%2==0)
        {
            hf=n/2;
        }
        else
        {
            hf=(n/2) +1;
        }

        if(k >= hf)
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


