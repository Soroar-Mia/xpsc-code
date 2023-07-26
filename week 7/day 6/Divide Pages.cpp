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
        ll n,even=0,odd=0;
        cin>>n;
        int a[n];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(ll i=0; i<n; i++)
        {
            if(a[i]%2==0) even++;
            else odd++;
        }

        if(even%2==0 || odd%2==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}


