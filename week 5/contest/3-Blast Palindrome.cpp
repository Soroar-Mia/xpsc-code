#include <iostream>
using namespace std;

bool isPalindrome(string s)
{
    int i = 0;
    int j = s.length() - 1;

    while (i < j)
    {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }

    return true;
}

string convertToPalindrome(string s)
{
    int n = s.length();

    if (isPalindrome(s))
        return "YES";

    for (int i = 1; i < n - 1; i++)
    {
        string temp = s.substr(0, i - 1) + s.substr(i + 2);
        if (isPalindrome(temp))
            return "YES";
    }

    return "NO";
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        string S;
        cin.ignore();
        getline(cin, S);

        string result = convertToPalindrome(S);
        cout << result << endl;
    }

    return 0;
}
