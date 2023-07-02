#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ind = -1, carry = 0;
        string s;
        cin>>s;
        int n = s.size();

        for(int i = n-1; i >= 0; i--)
        {
            int digit = (s[i]-'0') + carry;

            if (i > 0) {
                digit += (s[i-1]-'0');
            }

            carry = digit / 10;
            s[i] = (digit % 10) + '0';

            if (i > 0 && digit > 9)
            {
                ind = i - 1;
            }
        }

        if (carry > 0) {
            s.insert(s.begin(), carry + '0');
        }

        if (ind != -1)
        {
            for (int i = 0; i < ind; i++)
            {
                cout << s[i];
            }
            cout << (s[ind]-'0') + (s[ind+1]-'0');
            for (int i = ind+2; i < n; i++)
            {
                cout << s[i];
            }
        }
        else
        {
            cout << s;
        }

        cout << endl;
    }

    return 0;
}

