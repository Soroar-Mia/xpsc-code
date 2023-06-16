#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    for(int j=0; j<t; j++)
    {
        int n;
        cin >> n;

        vector<int> candies(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> candies[i];
        }

        int minCandies = *min_element(candies.begin(), candies.end());
        long long total = 0;

        for (int i = 0; i < n; ++i)
        {
            total += candies[i] - minCandies;
        }

        cout << total <<endl;
    }

    return 0;
}

