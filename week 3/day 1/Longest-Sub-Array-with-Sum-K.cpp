#include<bits/stdc++.h>
using namespace std;

int lenOfLongSubarr(int A[], int N, int K) {
    int sum = 0;
    int ans = 0;
    unordered_map<int, int> mp;

    for (int i = 0; i < N; i++) {
        sum += A[i];

        if (sum == K) {
            ans = i + 1;
        }

        if (mp.find(sum - K) != mp.end()) {
            int indx = mp[sum - K];
            ans = max(ans, i - indx);
        }

        if (mp.find(sum) == mp.end()) {
            mp[sum] = i;
        }
    }

    return ans;
}

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];

    for (int p = 0; p < n; p++) {
        cin >> a[p];
    }

    int result = lenOfLongSubarr(a, n, k);
    cout << result << endl;

    return 0;
}



