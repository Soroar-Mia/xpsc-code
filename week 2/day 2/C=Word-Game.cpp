#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<string> words[3];
        unordered_map<string, int> freq;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string word;
                cin >> word;
                words[i].push_back(word);
                freq[word]++;
            }
        }

        int points[3] = {0, 0, 0};

        for (int i = 0; i < 3; i++)
        {
            for (const string& word : words[i])
            {
                if (freq[word] == 1)
                {
                    points[i] += 3;
                }
                else if (freq[word] == 2)
                {
                    points[i]++;
                }
            }
        }

        cout << points[0] << " " << points[1] << " " << points[2] << endl;
    }

    return 0;
}
