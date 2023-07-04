#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n;
    n=s.size();

    vector<pair<char,int>> order;

    char mn=min(s[0],s[n-1]);
    char mx=max(s[0],s[n-1]);

    cout<<mn<< "   "<<mx<<endl;



    return 0;
}

