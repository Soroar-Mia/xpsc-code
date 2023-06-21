#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ss = "";
        for (int k = 0; k < n; k++)
        {
            char ch = tolower(s[k]);
            ss += ch;
        }
        int i = 0, j = 1;
        bool ans = true;
        while (j < n)
        {
            if (ss[i] == ss[j])
            {
                i++;
                j++;
                continue;
            }
            else if (ss[i] == 'm' && ss[j] == 'e')
            {
                i++;
                j++;
            }
            else if (ss[i] == 'e' && ss[j] == 'o')
            {
                i++;
                j++;
            }
            else if (ss[i] == 'o' && ss[j] == 'w')
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
        if (ans)
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
