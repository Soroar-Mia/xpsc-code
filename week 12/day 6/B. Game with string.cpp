#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;

using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int tt = 0; tt < t; tt++)
	{
		ll attack, health, n;
		cin >> attack >> health >> n;

		ll monh[n];
		ll mona[n];

		int m=-1;
		int pos=-1;
		for (int i = 0; i < n; i++)
		{
			cin >> mona[i];
			if (mona[i] > m)
			{
				m = mona[i];
				pos = i;
			}
		}
		for (int i = 0; i < n; i++)
		{
			cin >> monh[i];
		}

		for (int i = 0; i < n ; i++)
		{
			if(pos==i)
			{
				continue;
			}
			if (health < 1)
			{
				break;
			}
			ll rounds = ceil(1.0 * monh[i] / attack * 1.0);
			health = health - (mona[i] * rounds);
		}

		if (health < 1)
		{
			cout << "NO\n";
			continue;
		}

		ll roundmon = ceil(1.0 * monh[pos] / attack * 1.0);
		ll roundhero = ceil(1.0 * health / mona[pos] * 1.0);

		if (roundmon > roundhero)
		{
			cout << "NO\n";
		}
		else
		{
			cout << "YES\n";
		}
	}

	return 0;
}
