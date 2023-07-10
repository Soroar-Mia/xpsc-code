//Bismillahir Rahmanir Rahim

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int L, v, l, r;
        cin >> L >> v >> l >> r;

        int totalLan = L / v;
        int visibleLan = totalLan;

        int tStart = (l - 1) / v;
        int tEnd = r / v;

        int lanCover = tEnd - tStart;

        visibleLan -= lanCover;

        cout << visibleLan << endl;
    }

    return 0;
}
