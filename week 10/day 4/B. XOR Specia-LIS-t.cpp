#include<bits/stdc++.h>
using  namespace  std;

typedef long long int ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n+4];
        for(int i=0;i<n;i++)cin>>ar[i];
        int ans=0;
        if(n%2==0)cout<<"YES"<<endl;
        else
        {
            for(int i=1;i<n;i++)
            {
                if(ar[i]<=ar[i-1])
                {
                    ans=1;
                    break;
                }
            }
            if(ans==1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
