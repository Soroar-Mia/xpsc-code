#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> arrival(N);
        vector<int> departure(N);

        for (int i = 0; i < N; i++)
            cin >> arrival[i];

        for (int i = 0; i < N; i++)
            cin >> departure[i];

        vector<pair<int, int>> events;

        for (int i = 0; i < N; i++)
        {
            events.push_back({arrival[i], 1});
            events.push_back({departure[i], -1});
        }

        sort(events.begin(), events.end());

        int runways = 0;
        int maxRunways = 0;

        for (auto event : events)
        {
            runways += event.second;

            if (runways > maxRunways)
                maxRunways = runways;
        }

        cout << maxRunways << endl;
    }

    return 0;
}
