#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        vector<long long int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        long long int sum=0,op=0;
        bool negSeg=false;
        int cons=0;
        for(int i=0; i<=n; i++)
        {
            if(i<n)sum+=abs(a[i]);
            if(negSeg)
            {
                if(i==n or a[i]>0)
                {
                    op++;
                    negSeg=false;
                }
            }
            else
            {
                if(a[i]<0)
                {
                    negSeg=true;
                }
            }
        }

        cout<<sum<<" "<<op<<endl;
    }
    return 0;
}
