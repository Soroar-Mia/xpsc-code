#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string t;
    cin >> s;
    cin >> t;
    int c = 0;
    int i = 0;

    while (i < s.size() && i < t.size())
    {
        if (s[i] == t[i])
        {
            i++;
        }
        else
        {
            c++;
            i++;
        }
    }
    cout << c << endl;

    return 0;
}

