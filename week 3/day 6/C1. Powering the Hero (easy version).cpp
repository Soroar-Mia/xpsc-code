#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
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


        long long int ans=0;
        priority_queue<long long int> pq;
        for(long long int i=0; i<n; i++)
        {
            if(a[i]==0)
            {
                if(pq.empty())continue;
                ans+=pq.top();
                pq.pop();
            }
            else
            {
                pq.push(a[i]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
