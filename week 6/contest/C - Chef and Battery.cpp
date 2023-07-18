///********Bismillahir Rahmanir Rahim ********
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int minimumTime(int batteryLevel)
{
    if (batteryLevel == 50)
        return 0;

    int time = 0;
    while (batteryLevel != 50)
    {
        if (batteryLevel < 50)
        {
            batteryLevel += 2;
        }
        else
        {
            batteryLevel -= 3;
        }
        time++;
    }
    return time;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int batteryLevel;
        cin >> batteryLevel;
        cout << minimumTime(batteryLevel) <<endl;
    }

    return 0;
}

