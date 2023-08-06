#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int mi = *min_element(a.begin(), a.end());
        int mx = *max_element(a.begin(), a.end());
        cout << mx - mi << endl;
    }
    return 0;
}
