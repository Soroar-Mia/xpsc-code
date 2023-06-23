#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        long long int a[n];
        for(long long int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        long long int i=0,j=1;
        bool ans =false;
        for(long long int i=0; i<n-1; i++)
        {
            for(long long int j=1; j<n; j++)
            {
                if((a[i] & a[j]) == k)
                {
                    ans=true;

                }
            }
        }
        if(ans)
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
