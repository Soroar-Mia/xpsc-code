#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;
    map<int,int>mp;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[i]=x;
        mp[x]++;
    }
    for(auto i : mp){
        if(i.second == 1){
            for(int j=0;j<(int)a.size();j++){
                if(a[j]==i.first){
                    cout<<j+1<<"\n";
                    return;
                }
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            cout<<fixed;
            cout<<setprecision(10);
            int t=1;
            cin>>t;
            for(int i=1;i<=t;i++){
                solve();
    }
    return 0;
}

