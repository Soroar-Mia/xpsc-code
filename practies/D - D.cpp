///******** Bismillahir Rahmanir Rahim *******

#include<bits/stdc++.h>
using namespace std;

bool isPermutation(vector<int>& nums) {
    int n = nums.size();
    vector<bool> visited(n + 1, false);

    for (int i = 0; i < n; i++) {
        int num = nums[i];

        if (num < 1 || num > n || visited[num])
            return false;

        visited[num] = true;
    }

    return true;
}

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    if (isPermutation(A)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
