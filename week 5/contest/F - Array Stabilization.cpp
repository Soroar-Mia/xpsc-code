//Bismillahir Rahmanir Rahim

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    if(n==2)
    {
        cout << 0 << endl;
        return 0;
    }
    sort(arr, arr+n);
    int ans=min((arr[n-2]-arr[0]),(arr[n-1]-arr[1]));
    cout << ans << endl;
    return 0;
}
