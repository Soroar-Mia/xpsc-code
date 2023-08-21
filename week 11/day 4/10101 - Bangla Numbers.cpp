#include<bits/stdc++.h>
using namespace std;

bool isMirrored(char a, char b) {
    // Define the mapping of mirrored characters
    string mirroredChars = "A...3..HIL...J...M...O...2TUVWXY51SE.Z..8.";
    return mirroredChars[a - 'A'] == b;
}

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
        bool mirrored = true;
        while (!dq.empty())
        {
            char a = dq.back();
            char b = dq.front();
            if (a != b) {
                palindrome = false;
            }
            if (!isMirrored(a, b)) {
                mirrored = false;
            }
            dq.pop_back();
            dq.pop_front();
        }

        cout << s << " -- ";
        if (palindrome && mirrored)
        {
            cout << "is a mirrored palindrome." << endl;
        }
        else if (palindrome)
        {
            cout << "is a regular palindrome." << endl;
        }
        else if (mirrored)
        {
            cout << "is a mirrored string." << endl;
        }
        else
        {
            cout << "is not a palindrome." << endl;
        }
        cout << endl;
    }
    return 0;
}

