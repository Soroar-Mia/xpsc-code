#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x, i, s, j;
    cin >> t;

    while (t--)
    {
        cin >> x;

        int n[11];
        s = 9;
        i = 0;

        while (x)
        {
            if (x >= s)
            {
                x = x - s;
                n[i++] = s;
            }
            s--;
        }

        for (j = i - 1; j >= 0; j--)
            cout << n[j];
        cout << endl;
    }

    return 0;
}

