///*******Bismillahir Rahmanir Rahim********
///*** Read in the name of Allah, who created you ****
#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main() {
	int t;
	cin>>t;

	while(t--){
	    int a,b,n,sum=0;
	    cin>>n>>a>>b;
	    for(int i=1;i<=n;i++){
	        if(i%2==0){
	            sum+=a;
	        }else{
	            sum+=b;
	        }
	    }
	    cout<<sum<<endl;

	}
	return 0;
}

