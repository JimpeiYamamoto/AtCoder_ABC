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
	Graph	G(N);
	vector<ll>	T(N), K(N);
	map<ll, ll>	need;
	rep(i, N)
	{
		cin >> T[i] >> K[i];
		rep(j, K[i])
		{
			ll	a; cin >> a;
			a--;
			G[i].push_back(a);
			if (i == N - 1)
				need[a]++;
		}
	}
	map<ll, ll>	mp;
	ll	ans = T[N - 1];
	for (ll i = N - 1; i <= 0; i--)
	{
		for (auto g : G[i])
		{
			if (mp[g] == 1)
				continue;
			ans += T[g];
			mp[g]++;
		}
	}
	cout << ans << endl;
	return (0);
}
