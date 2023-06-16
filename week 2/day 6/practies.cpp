#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, Q;
    cin >> N;
    int arr[N];
    int arrp2[N];


    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        arrp2[i]=arr[i];
    }

    sort(arrp2,arrp2+N);

        for (int i = 0; i < N; i++)
    {
        cout<<arrp2[i]<<" ";

    }
    return 0;
}


