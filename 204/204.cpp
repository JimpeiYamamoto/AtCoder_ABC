#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < n; i++)
typedef unsigned long long ull;
typedef long double ld;
using graph = vector< vector<ll> >;
vector<bool> seen;
long double	pi = 3.14159265358979;
long long	pow18 = 1000000000000000000ll;
long long	mod9 = 1000000007;

int	main()
{
	ll	n, m; cin >> n >> m;
	graph	g(n + 1);
	rep(i, m)
	{
		ll	a, b;
		cin >> a >> b;
		a--;
		b--;
		g[a].push_back(b);
	}
	ll	ans = 0;
	rep(i, n)
	{
		vector<ll>	dist(n, -1);
		queue<ll>	que;
		dist[i] = 0;
		que.push(i);
		while (!que.empty())
		{
			int	v = que.front();
			que.pop();
			for (int nv : g[v])
			{
				if (dist[nv] != -1)
					continue;
				dist[nv] = dist[v] + 1;
				que.push(nv);
			}
		}
		rep(i, n)
		{
			if (dist[i] != -1)
				ans++;
		}
	}
	cout << ans << endl;
	return (0);
}
