#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int N, Q;
    cin >> N;
    long long int arr[N];
    long long int arrp[N];
    long long int arrp1[N];
    long long int arrp2[N];

    for (long long int i = 1; i <= N; i++)
    {
        cin >> arr[i];
        arrp2[i]=arr[i];
        if (i == 1)
        {
            arrp[i] = arr[i];
        }
        else
        {
            arrp[i] = arrp[i-1] + arr[i];
        }
    }

    sort(arrp2,arrp2 + N);
    for (long long int i = 1; i <= N; i++)
    {
        if (i == 1)
        {
            arrp1[i] = arrp2[i];
        }
        else
        {
            arrp1[i] = arrp1[i-1] + arrp2[i];
        }
    }
    cin >> Q;
    for (long long int i = 1; i <= Q; i++)
    {
        long long int n, m,p;
        cin >> p >> n >> m ;
        if(p==1)
        {
            if (n == 1)
            {

                cout << arrp[m] << endl;
            }
            else
            {
                cout << (arrp[m] - arrp[n-1]) << endl;
            }
        }
        else if(p==2)
        {
            if (n == 1)
            {

                cout << arrp1[m] << endl;
            }
            else
            {
                cout << (arrp1[m] - arrp1[n-1]) << endl;
            }
        }
    }

    return 0;
}

