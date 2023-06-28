#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        vector<long long int> a(n);
        for(long long int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        long long int ans=n;

        long long int segSum=0;

        for(long long int i=0; i<n; i++)
        {
            segSum+=a[i];
            long long int sum=0;
            long long int len=0,mxLen=i+1;
            bool possible=false;
            for(long long int j=i+1; j<n; j++)
            {
                if(sum+a[j]>segSum)
                {
                    break;
                }
                if(j==n-1 and sum+a[j]==segSum)
                {
                    mxLen=max(mxLen,len+1);
                    possible=true;
                    break;
                }
                sum+=a[j];
                len++;
                if(sum==segSum)
                {
                    mxLen=max(mxLen,len);
                    len=0;
                    sum=0;
                }
            }
            if(possible)
            {
                ans=min(ans,mxLen);
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}


