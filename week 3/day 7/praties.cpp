#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string a="";
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        a += s;
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
}
