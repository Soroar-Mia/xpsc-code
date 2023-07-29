///*******Bismillahir Rahmanir Rahim*******

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a(10);
    for(int i=0; i<10; i++)
    {
        a[i]=i;
    }
    auto call = [&a]() -> int
    {
        int ans = 0;
        for (auto i : a)
        {
            ans += i;
        }
        return ans;
    };
    cout << call() << endl;

    ///pair sort


    vector<pair<int,int>> a;

    a.push_back({3,2});
    a.push_back({1,5});
    a.push_back({1,1});
    a.push_back({2,4});
    a.push_back({4,3});
    a.push_back({5,1});
    a.push_back({5,2});

    sort(a.begin(),a.end(),[&](pair<int,int>x,pair<int,int>y){
            if(x.first == y.first)
            {
                return (x.second>y.second);
            }
            return (x.first>y.first);
         });

    for(auto i:a)
    {
        cout<<i.first<<"--"<<i.second<<endl;
    }
}
