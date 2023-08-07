#include <bits/stdc++.h>
using namespace std;

const int N  = (int) 1e6+5;

#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    Faster;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }


        ll ans=0;
        priority_queue<ll> pq;
        for(int i=0; i<n; i++)
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

