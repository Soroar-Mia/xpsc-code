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
        long long int res = 0;
        vector<long long int>v;

        for(long long int i=1; i<=n; i++)
        {
            long long int x;
            cin>>x;

            while(x%2 == 0)
            {
                res++;
                x /= 2;
            }

            long long int cur = i;
            long long int temp = 0;
            while(cur%2 == 0)
            {
                temp++;
                cur /= 2;

            }
            v.push_back(temp);
        }

        sort(v.rbegin(), v.rend());

        if(res>=n) cout<<0<<endl;
        else
        {
            long long int ans = 0;
            for(int i=0; i<v.size(); i++)
            {
                res += v[i];
                ans++;
                if(res>=n)
                {
                    cout<<ans<<endl;
                    break;
                }
            }
            if(res<n) cout<<-1<<endl;
        }

    }
}
