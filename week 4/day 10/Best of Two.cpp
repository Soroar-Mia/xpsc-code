#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int alice[3], bob[3];

        for (int i = 0; i < 3; i++)
        {
            cin >> alice[i];
        }

        for (int i = 0; i < 3; i++)
        {
            cin >> bob[i];
        }

        sort(alice, alice + 3, greater<int>());
        sort(bob, bob + 3, greater<int>());

        int aliceScore = alice[0] + alice[1];
        int bobScore = bob[0] + bob[1];

        if (aliceScore > bobScore)
        {
            cout << "Alice" << endl;
        }
        else if (aliceScore < bobScore)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Tie" << endl;
        }
    }

    return 0;
}
