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
        int ar[n+2];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            sum+=ar[i];
        }
        if(sum==n)cout<<0<<endl;
        else if(sum<n)cout<<1<<endl;
        else
        {
            cout<<sum-n<<endl;
        }
    }
    return 0;
}
