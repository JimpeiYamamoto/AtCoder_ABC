#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, N) for (ll i = 0; i < N; i++)
typedef unsigned long long ull;
typedef long double ld;
using Graph = vector< vector<ll> >;
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
		ll	a; cin >> a;
		mp[a % 200]++;
	}
	ll	ans = 0;
	for (ll i = 0; i <= 199; i++)
	{
		for (ll j = 0; j <= 199; j++)
		{
			if ((i - j) % 200 == 0)
			{
				if (i == j)
					ans += mp[i] * (mp[i] - 1) / 2;
			}
		}
	}
	cout << ans << endl;
	return (0);
}
