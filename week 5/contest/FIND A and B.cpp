//Bismillahir Rahmanir Rahim

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        int a, b;
        bool found = false;

        if (x != y && x != z)
        {
            a = y * z;
            if (a % x == 0)
            {
                b = x;
                found = true;
            }
        }

        if (!found && y != x && y != z)
        {
            a = x * z;
            if (a % y == 0)
            {
                b = y;
                found = true;
            }
        }

        if (!found && z != x && z != y)
        {
            a = x * y;
            if (a % z == 0)
            {
                b = z;
                found = true;
            }
        }

        if (found)
        {
            cout << a << " " << b << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
