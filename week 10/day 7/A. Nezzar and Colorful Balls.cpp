#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        int n;
        cin>>n;
        unordered_map <int,int> mp;
        int ans=1;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            mp[x]++;
            ans=max(ans,mp[x]);
        }
        cout<<ans<<"\n";
    }
    return 0;
}
//   https://www.youtube.com/watch?v=usqFIxyxH6I
