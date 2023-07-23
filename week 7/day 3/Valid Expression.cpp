#include<bits/stdc++.h>
using  namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        int lim = 0;
        if(m<0)lim = n-1;
        else lim = n+1;

        if(abs(m)>lim)cout<<"-1\n";
        else{
            if(m<=0){
                int score = 1;

                while(n--){
                    if(score == m){
                        cout<<"*";
                    }
                    else{
                        cout<<"-";
                        score--;
                    }
                }
            }
            else{
                int score = 1;

                while(n--){
                    if(score == m){
                        cout<<"*";
                    }
                    else{
                        cout<<"+";
                        score++;
                    }
                }
            }
            cout<<"\n";
        }
    }
}
