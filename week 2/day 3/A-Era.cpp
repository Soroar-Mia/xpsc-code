#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    for(int j=0; j<t; j++)
    {
        long long int n;
        cin>>n;
        long long int ar[n+3];
        for(int i=1; i<=n; i++)
        {
            cin>>ar[i];
        }
        long long int ans=ar[1]-1;
        long long int ind=ans;
        for(int i=2; i<=n; i++)
        {
            if(ind+i<ar[i])
            {
                long long int x=ar[i]-(ind+i);
                ind +=x;
                ans +=x;
            }
        }
        cout << ans <<endl;
    }
    return 0;
}
