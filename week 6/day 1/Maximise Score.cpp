///********* Bismillahir rahmanir rahim ***********

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> A;
        for (int i = 0, x; i < n; i++)
        {
            cin >> x;
            A.push_back(x);
        }
        int mn;
        int mx;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                mn = abs(A[i] - A[i + 1]);
                continue;
            }
            if (i == n - 1)
            {
                mn = min(mn, abs(A[i] - A[i - 1]));
                break;
            }
            mx = max(abs(A[i] - A[i + 1]), abs(A[i] - A[i - 1]));
            mn = min(mn, mx);
        }
        cout << mn << endl;
    }
    return 0;
}
