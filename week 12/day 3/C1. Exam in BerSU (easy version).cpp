#include<bits/stdc++.h>
#define ll long long int
using namespace std;

priority_queue <int> greatEle,tELe;

int main()
{
    int n, m;
    cin>>n>>m;
    vector <int > v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    int sum = 0;
    for(int i = 0 ; i < n; i++)
    {
        if(v[i] <= m-sum)
        {
            cout<<"0"<<" ";
        }
        else
        {
            tELe = greatEle ;
            int cnt = 0;
            while(!tELe.empty())
            {
                if(m-sum >= v[i])
                    break ;
                cnt++;
                sum-=tELe.top();
                tELe.pop();
            }
            cout<<cnt<<" ";
        }
        sum += v[i];
        greatEle.push(v[i]);
    }
    puts("");
    return 0;
}
