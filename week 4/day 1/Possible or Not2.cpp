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
        int ans = -1;
        for(long long int i=0; i<n; i++)
        {
            if((a[i] & k) == k)
            {
                ans =ans & a[i];
            }
        }
        if(ans == k)
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

