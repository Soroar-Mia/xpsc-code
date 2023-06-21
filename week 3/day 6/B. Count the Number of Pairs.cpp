#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n>>k;
        string s;
        cin >> s;
        int ans=0;

        map<char,int> freq;
        for(auto c:s)
        {
            freq[c]++;
        }
        for(char c='a';c<='z'; c++)
        {
            int mn=min(freq[c], freq[(c - 32)]);
            ans +=mn;
            freq[c] -=mn;
            freq[c -32] -=mn;
        }
        for(char c='a'; c<='z'; c++)
        {
            int ma=max(freq[c],freq[(c-32)]);
            int mn=min(k,(ma/2));
            ans +=mn;
            k -=mn;
        }
        cout<<ans<<endl;
    }
    return 0;
}

