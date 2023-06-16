#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(),s.end());

        int ans=0;
        if(s.size()!=0)
        {
            ans +=2;
        }
        int i=0,j=1;
        while(j<n)
        {
            if(s[i]==s[j])
            {
                ans +=1;
                j++;
                i++;
            }
            else
            {
                ans +=2;
                j++;
                i++;
            }
        }
        cout<< ans << endl;
    }
    return 0;

}
