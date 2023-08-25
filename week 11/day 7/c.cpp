///******* bismillahir rahmanir rahim *********

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        if (*max_element(arr.begin(), arr.end()) > n)
        {
            cout << "NO" << '\n';
            continue;
        }

        vector<int> ps(n + 1, 0);
        for (int i = 0; i < n; ++i)
        {
            ps[0]++;
            ps[arr[i]]--;
        }

        int sm = 0;
        for (int i = 0; i < n; ++i)
        {
            sm += ps[i];
            ps[i] = sm;
        }

        bool ok = true;
        for (int i = 0; i < n; ++i)
        {
            if (ps[i] != arr[i])
            {
                ok = false;
                break;
            }
        }

        if (ok)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }

    return 0;
}
