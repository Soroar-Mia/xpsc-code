///******** Bismillahir Rahmanir Rahim *******
#include<bits/stdc++.h>
using namespace std;

string find_word_in_column(char grid[8][8]) {
    string word;
    for (int row = 0; row < 8; row++) {
        for (int col = 0; col < 8; col++) {
            if (grid[row][col] >= 'a' && grid[row][col] <= 'z') {
                word += grid[row][col];
            }
        }
    }
    return word;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        char grid[8][8];

        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                cin >> grid[i][j];
            }
        }

        cout << find_word_in_column(grid) << endl;
    }

    return 0;
}
