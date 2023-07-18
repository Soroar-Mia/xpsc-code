///********Bismillahir Rahmanir Rahim ********
#include<bits/stdc++.h>
using namespace std;

const int N = (int)1e6 + 5;
const int M = (int)1e9 + 5;
const int md = (int)1e9 + 7;

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
        int mn = numeric_limits<int>::max();
        int mx = numeric_limits<int>::min();
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

