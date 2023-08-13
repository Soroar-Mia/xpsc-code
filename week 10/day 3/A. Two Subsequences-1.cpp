#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        char min = str[0];
        int index = 0;
        for(int i = 0; i<str.size(); i++)
        {
            if(str[i]<min)
            {
                min = str[i];
                index = i;
            }
        }
        string new_b;
        if(index == str.size() - 1)
            new_b = str.substr(0, index);
        else
            new_b = str.substr(0, index)+str.substr(index+1);

        cout<<min<<" "<< new_b<<endl;
    }
}
