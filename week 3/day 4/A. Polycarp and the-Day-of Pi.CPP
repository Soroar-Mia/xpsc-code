#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pi = "31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
        int i=0, cnt =0;
        while(i<s.size())
        {
            if(pi[i]==s[i])
            {
                cnt++;
            }
            else
            {
                break;
            }
            i++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
