#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;


    for(int j=0; j<T; j++)
    {
        int N;
        cin >> N;

        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        int minSum = INT_MAX;
        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                int sum = A[i] + A[j] + j - i;
                if (sum < minSum)
                {
                    minSum = sum;
                }
            }
        }

        cout << minSum << endl;
    }


    return 0;
}
