#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n;
    cin>>n>>k;
    int a[n];
    for (int p = 0; p < n; p++)
        {
            cin>>a[p];
        }
    int i=0,j=0;
    long long int s=0;
    int ans=0;
    while(j<n)
    {
        s +=a[j];
        if(s>k)
        {
            while(s>k)
            {
                s -=a[i];
                i++;
            }
        }
        if(s==k)
        {
            ans=max(ans,j-i+1);
        }
        j++;
    }
    cout<<ans;
    return 0;
}


