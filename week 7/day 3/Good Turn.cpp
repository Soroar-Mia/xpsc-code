#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int sum=a+b;
	    if(sum>6) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
