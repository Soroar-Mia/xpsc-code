#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(int a)
{
    string s1 = to_string(a);
    string s2 = s1;
    reverse(s2.begin(), s2.end());
    return s1==s2;
}

int main()
{
        int n ;
        cin>>n;
        vector<int> v(n), fq(1<<15, 0);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            fq[v[i]]++;
        }

        vector<int> palindrome;
        for(int i=0; i<(1<<15); i++)
        {
            if(is_palindrome(i)) palindrome.push_back(i);
        }

        for(int i=0; i<palindrome.size(); i++)
        {
            cout<<palindrome[i]<<endl;
        }

    return 0;
}
