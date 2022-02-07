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
	ll	M; cin >> M;
	Graph	G(9);
	rep(i, M)
	{
		ll	u, v; cin >> u >> v;
		u--; v--;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	vector<int>	P(8);
	ll	out = 36;
	rep(i, 8)
	{
		ll	p; cin >> p;
		P[i] = p--;
		out -= p;
	}
	vector<int>	dist(9, -1);
	vector<int>	len_(9, -1);
	int	len = INT_MAX;
	queue<int>	que;
	dist[out] = 0;
	que.push(out);
	while (!que.empty())
	{
		int	v = que.front();
		que.pop();
		vector<int>	p_cpy = P;
		ll	ans = 0;
		for (int nv : G[v])
		{
			if (dist[nv] != -1)
				continue;
			dist[nv] = dist[v] + 1;
			swap(p_cpy[nv], p_cpy[v]);
			bool	ok = true;
			rep(i, 8)
			{
				if (p_cpy[i] != i)
					ok = false;
			}
			if (ok == true)
			{
				len = min(len, dist[nv]);
			}
			que.push(nv);
		}
	}
	if (len == INT_MAX)
		cout << -1 << endl;
	else
		cout << len << endl;
	return (0);
}
