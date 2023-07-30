#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    set<int>se;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        se.insert(a);
    }
    if(se.size()<2)
    {
        cout<<"NO"<<endl;
    }

    auto it=se.begin();
    it++;
    cout<<(*it)<<endl;

    return 0;
}
