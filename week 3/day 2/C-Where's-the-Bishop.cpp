#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s[8];
        for(int i=0; i<8; i++)
        {
            cin>>s[i];
        }
        int ind1 = -1, ind2 = -1;
        for(int i=1; i<7; i++)
        {
            for(int j=1; j<7; j++)
            {
                if(s[i-1][j+1]=='#' && s[i-1][j-1]=='#' && s[i+1][j+1]=='#' && s[i+1][j-1]=='#')
                {
                    ind1=i+1;
                    ind2=j+1;
                }
            }
        }
        cout<<ind1<< " "<<ind2<<endl;
    }
    return 0;
}
