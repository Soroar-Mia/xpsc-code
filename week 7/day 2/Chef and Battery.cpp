
///******** Bismillahir Rahmanir Rahim *******

#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int time=0;
        if(n==50)
        {
            cout<<0<<endl;
            continue;
        }
        while(n != 50)
        {
            if(n<50)
            {
                n +=2;
            }
            else if(n>50)
            {
                n -=3;
            }
            time++;
        }
        cout<<time<<endl;
    }
    return 0;
}

