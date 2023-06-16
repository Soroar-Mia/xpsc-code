#include<bits/stdc++.h>
using namespace std;

int main()
{
    int z;
    cin >> z;
    while (z--)
    {
        int a;
        cin >> a;
        vector<int> n;
        for (int i = 0; i < a; i++)
        {
            int b;
            cin >> b;
            n.push_back(b);
        }
        int c;
        string s;
        for (int i = 0; i < a; i++)
        {
            cin >> c >> s;
            for (int j = 0; j < c; j++)
            {
                if (s[j] == 'U')
                {
                    if (n[i] == 0)
                    {
                        n[i] = 9;
                    }
                    else
                    {
                        n[i]--;
                    }
                }
                else
                {
                    if (n[i] == 9)
                    {
                        n[i] = 0;
                    }
                    else
                    {
                        n[i]++;
                    }
                }
            }
        }
        for (int i = 0; i < a; i++)
        {
            cout << n[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
