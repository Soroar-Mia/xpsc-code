#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    string u;
	    cin>>n>>u;
	    int c=1;
	    for(int i=0;i<n;i++)
	    {
	        if(u[i]==u[i+1]){c++;}
	        else{
	            if(c%2==0){cout<<u[i]<<u[i];}
	            else {cout<<u[i];}
	            c=1;
	        }
	    }
	    cout<<"\n";
	}
	return 0;
}
