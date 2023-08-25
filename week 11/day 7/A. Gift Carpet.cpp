#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<string> mat(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> mat[i];
        }

        bool ok= false;
        for (int i = 0; i < m-3; i++)
        {
            for (int j = i + 1; j < m-2; j++)
            {
                for (int k = j + 1; k < m-1; k++)
                {
                    for (int l = k + 1; l < m; l++)
                    {
                        bool vika = true;
                        for (int r = 0; r < n; r++)
                        {
                            if (mat[r][i] != 'v' && mat[r][j] != 'i' &&
                                    mat[r][k] != 'k' && mat[r][l] != 'a')
                            {
                                vika = false;
                                break;
                            }
                        }
                        if (vika)
                        {
                            ok = true;
                            break;
                        }
                    }
                    if (ok)
                    {
                        break;
                    }
                }
                if (ok)
                {
                    break;
                }
            }
            if (ok)
            {
                break;
            }
        }

        if (ok)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
