#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int ex=b-a;
	    int exp=ex*2;
	    if(b>a) cout<<a+exp<<endl;
	    else cout<<b<<endl;
	}
	return 0;
}

