#include <bits/stdc++.h>

#define ll long long

using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main()
{

    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        int a[n][n];
        for (int i = 0; i < n - 1; i++)
            for (int j = 0; j < n - 1; j++)
                a[i][j] = 1;

        int k = 4;
        while (isPrime(k) || !isPrime(k + n - 1))
        {
            k++;
        }

        for (int i = 0; i < n; i++)
        {
            a[i][n - 1] = k;
            a[n - 1][i] = k;
        }

        k *= n - 1;
        int temp = 0;
        while (isPrime(temp) || !isPrime(temp + k))
        {
            temp++;
        }

        a[n - 1][n - 1] = temp;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }

    return 0;
}
