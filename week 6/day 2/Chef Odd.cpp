///******** Bismillahir Rahmanir Rahim *******

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007


void usool()
{
    ll n,k;
    cin>>n>>k;

    ll on=(n/2)+(n%2);
    cout<<"on"<<on<<endl;
    ll xtraodd=on-k;
    cout<<"xtraodd"<<xtraodd<<endl;

    if(n<2*k)
        cout<<"NO"<<endl;
    else if(n==2*k)
        cout<<"YES"<<endl;
    else
    {
        if(xtraodd%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        usool();
    }

    return 0;
}
