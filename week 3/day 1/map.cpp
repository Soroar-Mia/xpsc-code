#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, int> mp;


    mp[10]++;
    mp[11]++;
    mp[11]++;
    mp[12]++;
    mp[12]++;
    mp[12]++;


    auto it = mp.begin();
    while(it != mp.end())
    {
        if(it ->second >1)
        {
            cout <<it->first<<" = "<< it->second<<endl;
        }
        it++;
    }

    return 0;
}


