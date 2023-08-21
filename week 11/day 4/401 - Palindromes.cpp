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
        bool mirrored = true; // Corrected variable name
        while (!dq.empty())
        {
            char a = dq.back();
            char b = dq.front();
            if (!isdigit(a)) // Corrected condition
            {
                mirrored = false; // Corrected variable assignment
            }
            if (!isdigit(b)) // Corrected condition
            {
                mirrored = false; // Corrected variable assignment
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
        if (palindrome && mirrored)
        {
            cout << s << " -- is a mirrored palindrome." << endl;
        }
        else if (palindrome)
        {
            cout << s << " -- is a regular palindrome" << endl;
        }
        else if (mirrored)
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
