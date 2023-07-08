#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n,k,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll	Min=99999999999999;
        if(n==1)
        {

            cout<<"0"<<endl;
            continue;
        }


        for(i=2; i<50000; i++)
        {

            if(n%i==0)
                k=(n/i)-1+(i-1);
            else
                k=n/i+(i-1);
            Min=min(Min,k);

        }
        cout<<Min<<endl;
    }
    return 0;
}
