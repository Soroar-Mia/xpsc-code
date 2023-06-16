#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    for(int k=0; k<t; k++)
    {
        long long int n;
        cin>>n;
        long long int arr[n+3];
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        long long int sum1=0, sum2=0;
        int i=1, j=n;
        int cnt1=0, cnt2=0;
        int ans=0;
        while(i<=j)
        {
            if(sum1<=sum2)
            {
                sum1 +=arr[i];
                i++;
                cnt1++;
            }
            else
            {
                sum2 +=arr[j];
                j--;
                cnt2++;
            }
            if(sum1==sum2)
            {
                ans=cnt1 + cnt2;
            }
        }
        cout<<ans<<endl;
    }
}

