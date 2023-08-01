///*******Bismillahir Rahmanir Rahim********
///*** Read in the name of Allah, who created you ****
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
        cin >> n;
        vector<int> v(n);
        if(n&1)
        {
            cout << -1 << endl;
            continue;
        }
        for(int i=0; i<n; i+=2)
        {
            v[i] = i+2;
        }
        for(int i=1; i<n; i+=2)
        {
            v[i] = i;
        }
        for(int i=0; i<n; i++)
        {
            cout << v[i] <<' ';
        }
        cout << endl;
    }
    return 0;
}


