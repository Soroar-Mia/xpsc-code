#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, k, b;
        cin >> n >> k;
        vector<pair<long long int, long long int>> fir;
        vector<long long int> sec, res(n);
        for (long long int i = 0; i < n; i++)
        {
            cin >> b;
            fir.push_back(make_pair(b, i));
        }
        for (long long int i = 0; i < n; i++)
        {
            cin >> b;
            sec.push_back(b);
        }
        sort(fir.begin(), fir.end());
        sort(sec.begin(), sec.end());
        for (long long int i = 0; i < n; i++)
        {
            res[fir[i].second] = sec[i];
        }
        for (long long int i = 0; i < n; i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
