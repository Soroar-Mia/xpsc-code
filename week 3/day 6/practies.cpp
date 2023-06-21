#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        for (int k = 0; k < n; k++)
        {
            char ch = tolower(s[k]);
            s[k] = ch;
        }

        int i = 0, j = 1;
        bool ans = true;
        while (j < n)
        {
            if (s[i] == s[j])
            {
                i++;
                j++;
            }
            else if (s[i] == 'm' && s[j] == 'e')
            {
                i++;
                j++;
            }
            else if (s[i] == 'e' && s[j] == 'o')
            {
                i++;
                j++;
            }
            else if (s[i] == 'o' && s[j] == 'w')
            {
                i++;
                j++;
            }
            else
            {
                ans = false;
                break;
            }
        }

        if (ans && i == n - 1)
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

