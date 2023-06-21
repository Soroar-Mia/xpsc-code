#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    int cnt = 0;
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        string si;
        cin >> si;
        int j = 0;
        bool tr = false;
        if (i == 0)
        {
            s[cnt] = si;
            cnt++;
        }
        while (j < cnt)
        {
            if (si == s[j])
            {
                tr = true;
                break;
            }
            j++;
        }
        if (tr)
        {
            continue;
        }
        else
        {
            s[cnt] = si;
            cnt++;
        }
    }

    for (int i = 0; i < cnt; i++)
    {
        string ss = s[i];
        ans += ss.back();
        ss.pop_back();
        ans += ss.back();
    }

    cout << ans << endl;

    return 0;
}
