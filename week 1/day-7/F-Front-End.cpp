#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int front = 0;
    int end = n - 1;

    while (front <= end) {
        cout << a[front++] << " ";

        if (front <= end) {
            cout << a[end--] << " ";
        }
    }

    cout <<endl;

    return 0;
}
