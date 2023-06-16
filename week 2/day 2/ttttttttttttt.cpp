#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=1; i<=n-1; i++)
    {
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end());


    for(int i=2; i<=n-1; i++)
    {
        if(arr[i-1]+1 !=arr[i])
        {
            cout<<arr[i-1] +1<<endl;
            break;
        }
    }
    return 0;
}
