#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;    cin>>t;
    while(t--)
    {
        string s1,s2;       cin>>s1>>s2;
        int n1=s1.size(), n2=s2.size(), x1=0, x2=0;
        char c1, c2;
        for(int i=0;i<n1;i++)
        {
            if(s1[i] != 'x')c1=s1[i];
            else x1++;
        }
        for(int i=0;i<n2;i++)
        {
            if(s2[i] != 'x')c2=s2[i];
            else x2++;
        }
        if(c1==c2)
        {
            if(x1==x2 or c1=='M')
            {
                cout<<"="<<endl;
                continue;
            }
            if(c1=='S')
            {
                if(x1>x2)
                {
                    cout<<"<"<<endl;
                }
                else
                {
                    cout<<">"<<endl;
                }
            }
            else if(c1=='L')
            {
                if(x1>x2)
                {
                    cout<<">"<<endl;
                }
                else
                {
                    cout<<"<"<<endl;
                }
            }
            continue;
        }
        if(c1=='S')
        {
            cout<<"<"<<endl;
        }
        else if(c1=='M' and c2=='S')
        {
            cout<<">"<<endl;
        }
        else if(c1=='M' and c2=='L')
        {
            cout<<"<"<<endl;
        }
        else if(c1=='L')
        {
            cout<<">"<<endl;
        }
    }
}
