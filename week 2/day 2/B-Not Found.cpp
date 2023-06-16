#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[26]= {0};
    string s;
    cin>>s;
    long long int n=s.size();

    for(int i=0; i<n; i++)
    {
        char c=s[i];
        arr[(int)c -97]++;
    }
    int counts =0;
    for(int i=0; i<=25; i++)
    {
        if(arr[i]==0)
        {
            cout<<(char)(i+97);
            counts ++;
            break;
        }

    }

    if(counts==0)
    {
        cout<<"None";
    }

    return 0;
}

