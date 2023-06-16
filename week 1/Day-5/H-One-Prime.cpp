#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x < 2)
    {
        cout << "NO" << endl;
        return 0;
    }


    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}
