#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    deque<char> q;

    for (int i = 0; i < s.size(); i++)
    {
        q.push_back(s[i]);
    }

    while (q.size() > 1)
    {
        if (q.front() == q.back())
        {
            q.pop_front();
            q.pop_back();
        }
        else
        {
            break;
        }
    }

    if (q.size() <= 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}


