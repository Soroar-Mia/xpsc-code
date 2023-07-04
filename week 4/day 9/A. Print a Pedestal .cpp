#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int x,y,z;

        for(int i=1; i<=n; i++)
        {
            y=i;

            int rem=n-y;

            if(rem%2==0)
            {
                x=1+(rem/2);
            }
            else
            {
                x=(rem+1)/2;
            }

            z=n-y-x;

            if(x>0 and y>0 and z>0 and x<y and x>z)
            {
                break;
            }
        }

        cout<<y<<x<<z;
    }
    return 0;
}

