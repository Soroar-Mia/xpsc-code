#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>a{1,2,3,4,5,6,7,8,9};
    int m=(a.size())/2;
    sort(a.begin(),a.end(),[&](int p,int q){
         if(abs(p-m)==abs(q-m))
         {
             return (q>p);
         }
         return (abs(p-m)>abs(q-m));
         });
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
}
