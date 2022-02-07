#include <bits/stdc++.h>
using namespace std;

using Graph = vector< vector<int> >;
vector<bool>			seen;
vector<int>				ans;

void	dfs(const Graph &G, int v)
{
	ans.push_back(v);
	seen[v] = true;
	for (int next_v : G[v])
	{
		if (seen[next_v] == true)
			continue;
		dfs(G, next_v);
		ans.push_back(v);
	}
}

int	main()
{
	int						N;
	cin >> N;
	Graph G(N + 1);
	int						a;
	int						b;
	for (int i = 0; i < N - 1; i++)
	{
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	seen.assign(N, false);
	for (int i = 1; i <= N; i++)
		sort(G[i].begin(), G[i].end());
	dfs(G, 1);
	for (int i = 0; i < (int)ans.size(); i++)
	{
		cout << ans[i];
		if (i < (int)ans.size() - 1)
			cout << " ";
	}
	cout << endl;
}
