#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,x,i,p,s;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&x);

        p=sqrt(x);

        s=x-p;

        if(s%p==0) s=s/p;
        else s=s/p+1;

        s=s+p-1;

        printf("%d\n",s);

    }
}
