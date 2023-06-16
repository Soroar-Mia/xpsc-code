#include <iostream>
using namespace std;

int main() {
    int N, Q;
    cin >> N;
    int arr[N];
    int arrp[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        if (i == 0) {
            arrp[i] = arr[i];
        } else {
            arrp[i] = arrp[i-1] + arr[i];
        }
    }

    cin >> Q;
    for (int i = 0; i < Q; i++) {
        int n, m;
        cin >> n >> m;
        if (n == 0) {
            cout << arrp[m] << endl;
        } else {
            cout << (arrp[m] - arrp[n-1]) << endl;
        }
    }

    return 0;
}
