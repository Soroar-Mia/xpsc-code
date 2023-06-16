#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int mx = 0;
    int idx;
    for(int i = 1000; i >= 2; i--)
    {
        int cnt = 0;
        for(int j = 1; j <= n; j++)
        {
            if(a[j] % i == 0) cnt ++;
        }
        if(cnt > mx)
        {
            mx = cnt ;
            idx = i;
        }
    }

    cout << idx << endl;
    return 0;
}
