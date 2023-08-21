#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        deque<char> dq;
        for (int i = 0; i < n; i++)
        {
            dq.push_back(s[i]);
        }
        bool palindrome = true;
        bool digit = true;
        while (!dq.empty())
        {
            char a = dq.back();
            char b = dq.front();
            if(isdigit(a))
            {
                digit=false;
            }
            if(isdigit(b))
            {
                digit=false;
            }
            if (a == b)
            {
                dq.pop_back();
                if (!dq.empty())
                    dq.pop_front();
            }
            else
            {
                palindrome = false;
                break;
            }
        }
        if (palindrome && digit)
        {
            cout << s << " -- is a mirrored palindrome." << endl;
        }
        else if(palindrome && !digit)
        {
            cout << s << " -- is a regular palindrome" << endl;
        }
        else if(digit && !palindrome)
        {
            cout << s << " -- is a mirrored string." << endl;
        }
        else
        {
            cout << s << " -- is not a palindrome" << endl;
        }
        cout << endl;
    }
    return 0;
}

