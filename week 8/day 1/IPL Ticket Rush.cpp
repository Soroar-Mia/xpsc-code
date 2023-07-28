///*******Bismillahir Rahmanir Rahim********
///*** Read in the name of Allah, who created you ****
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    if(m>=n) cout<<0<<endl;
	    else cout<<n-m<<endl;
	}
	return 0;
}
