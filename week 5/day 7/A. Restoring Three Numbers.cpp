// Bismillahir rahmanir rahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a(4);
    for(int i=0; i<4; i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    int b,c,d;
    d = a[3] - a[0];
    c = a[2] - d;
    b = a[3] - (c+d);
    cout<<b<<" "<<c<<" "<<d<<endl;

    return 0;
}
