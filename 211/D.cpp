#include <bits/stdc++.h>
using namespace std;

using Graph = vector< vector<int> >;

int	main()
{
	int	N, M;
	cin >> N >> M;
	int	a, b;
	Graph	G(M);
	for (int i = 0; i < M; i++)
	{
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	vector<int>	dist(N, -1);
	queue<int>	que;
	dist[1] = 0;
	que.push(1);
	vector<int>	vs;
	while (que.empty() == false)
	{
		int	v = que.front();
		que.pop();
		vs.push_back(v);
		for (int nv : G[v])
		{
			if (dist[nv] != -1)
				continue;
			dist[nv] = dist[v] + 1;
			que.push(nv);
		}
	}
	vector<int>	dp(N + 1);
	dp[1] = 1;
	for (int v : vs)
	{
		for (int u : G[v])
		{
			if (dist[u] == (dist[v] + 1))
				dp[u] += dp[v];
		}
	}
	int	ans = dp[N - 1];
	cout << ans << endl;
	for (int v = 0; v < N; v++)
		cout << v << ": " << dist[v] << endl;
}
