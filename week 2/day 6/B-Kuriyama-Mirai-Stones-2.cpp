#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int N;
    cin >> N;
    long long int ar[N + 1];
    long long int br[N + 1];
    long long int as[N + 1];
    long long int bs[N + 1];
    as[0] = 0;
    bs[0] = 0;
    for (long long int i = 1; i <= N; i++)
    {
        cin >> ar[i];
        br[i] = ar[i];
    }
    for (long long int i = 1; i <= N; i++)
    {
        as[i] = ar[i] + as[i - 1];
    }
    sort(br + 1, br + N + 1);
    for (long long int i = 1; i <= N; i++)
    {
        bs[i] = br[i] + bs[i - 1];
    }
    int q;
    cin >> q;
    while (q--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        if (a == 1)
        {
            cout << as[c] - as[b - 1] << endl;
        }
        else
        {
            cout << bs[c] - bs[b - 1] << endl;
        }
    }

    return 0;
}
