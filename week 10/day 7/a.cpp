#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t; cin>>t;
    string a;
    while(cin>>a){
        if (a == "()") {
            cout << "NO" << std::endl;
            continue;
        }
        cout << "YES" << std::endl;
        string d(a.length(), '(');
        d += string(a.length(), ')');
        string b="";
        for(int i=0; i<a.length(); i++)
        b+="()";
        if (d.find(a) != string::npos) cout<<b<<endl;
        else cout<<d<<endl;
    }
    return 0;
}
