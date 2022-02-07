#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;
typedef unsigned long long ull;
using Graph = vector< vector<int> >;
vector<bool> seen;
long double	PI = 3.14159265358979;
long long	POW18 = 1000000000000000000LL;
long long	mod9 = 1000000007;

int	main()
{
	ll	N; cin >> N;
	map<ll, ll>	mp;
	rep(i, N)
	{
		ll	a, b;
		cin >> a >> b;
		ll	start = a;
		ll	stop = a + b;
		for (ll i = start; i < stop; i++)
			mp[i]++;
	}
	map<ll, ll>	sort_mp;
	for (auto & [key, value] : mp)
		sort_mp.emplace(value, key);
	ll	j = 1;
	for (ll i = 1; i <= N; i++)
	{
		ll	cnt = 0;
		if (cnt == 0 && sort_mp[j] == i)
			continue;
		while (sort_mp[j] == i)
		{
			cnt++;
			j++;
		}
		cout << cnt << " ";
	}
	cout << endl;
	return (0);
}
