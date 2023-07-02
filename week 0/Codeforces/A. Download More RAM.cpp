#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>>A(n);

        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            A[i].first=a;
        }
        for(int i=0; i<n; i++)
        {
            int b;
            cin>>b;
            A[i].second=b;
        }
        sort(A.begin(), A.end());
        long long int ans=k;
        for(int i=0; i<n; i++)
        {
            if(A[i].first <= ans)
            {
                ans +=A[i].second;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
