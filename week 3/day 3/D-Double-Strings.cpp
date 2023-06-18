#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        map<string, int> freq;
        for (int i = 0; i < n; i++)
        {
            freq[a[i]]++;
        }

        string ans(n, '0');

        for (int i = 0; i < n; i++)
        {
            if (a[i].size() == 1)
                continue;

            for (int j = 1; j < a[i].size(); j++)
            {
                string x = a[i].substr(0, j);
                string y = a[i].substr(j);
                if (freq[x] > 0 && freq[y] > 0)
                {
                    ans[i] = '1';
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
