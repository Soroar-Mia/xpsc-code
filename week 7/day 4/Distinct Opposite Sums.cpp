///******* Bismillahir Rahmanir Rahim ********
///*** Read in the name of Allah, who created you ****
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int>A(n);
        int i = 0,j = n-1;
        int start = n;
        while(i<j)
        {
            A[i] =start;
            start--;
            A[j] = start;
            start--;
            j--;
            i++;
        }
        for(auto&x:A)cout<<x<<" ";
        cout<<"\n";
    }
    return 0;
}
