///*****Bismillahir Rahamanir Rahim*********

#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        if(n == 0)cout<<4<<" "<<6<<" "<<3<<" "<<7<<"\n";
        else{

            long long a = 1, b =2 , c = 0,d = 0;
            for(long long i = 3;i<=1000000;++i){
                long long cur = n^i;
                if(i == cur || cur<=2)continue;
                c = i;
                d = cur;
                break;
            }
            if(c == 0)cout<<"-1\n";
            else cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";
        }
    }
}


