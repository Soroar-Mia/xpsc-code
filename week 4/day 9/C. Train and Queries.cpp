#include <bits/stdc++.h>
using namespace std;


int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> u(n);
        for (int i = 0; i < n; i++)
        {
            cin >> u[i];
        }

        map<int, vector<int>> Indxs;
        for (int i = 0; i < n; i++)
        {
            Indxs[u[i]].push_back(i);
        }
        while (q--)
        {
            int a, b;
            cin >> a >> b;
            if (Indxs[a].empty() || Indxs[b].empty())
            {
                cout<<"NO";
                continue;
            }
            if (a == b)
            {
                cout<<"YES";
                continue;
            }
            if (Indxs[a].front() < Indxs[b].back())
            {
                cout<<"YES";
            }
            else
            {
               cout<<"NO";
            }
        }
    }
    return 0;
}
