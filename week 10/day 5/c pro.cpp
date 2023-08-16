#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main()
{
    int test_cases;
    cin >> test_cases;
    while(test_cases--)
    {
        ll n;
        cin >> n;
        vector<int>v;
        v.pb(1);
        map<ll, ll> m;
        m[1]=1;
        for(int i = 2; i <=n; i++)
        {
            if(m[i]==1)continue;
            int x=i;
            while(x<=n)
            {
                if(m[x]!=1)
                {
                    v.pb(x);
                    m[x]=1;
                    x*=2;
                }
            }
        }


        for(auto it : v)
            cout << it << " ";

        cout << "\n";
    }
    return 0;
}
