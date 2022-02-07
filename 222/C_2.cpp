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
	int	N, M; cin >> N >> M;
	vector<string>	A(N * 2);
	rep(i, 2 * N)
		cin >> A[i];
	vector< pair<int, int> >	rank(2 * N);
	rep(i, 2 * N)
		rank[i] = make_pair(0, i);
	rep(m, M)
	{
		for (int i = 0; i < N; i++)
		{
			int	p1 = rank[2 * i].second;
			int	p2 = rank[2 * i + 1].second;

			if (A[p1][m] == 'G' && A[p2][m] == 'C')
				rank[2 * i].first--;
			else if (A[p1][m] == 'C' && A[p2][m] == 'P')
				rank[2 * i].first--;
			else if (A[p1][m] == 'P' && A[p2][m] == 'G')
				rank[2 * i].first--;
			else if (A[p2][m] == 'G' && A[p1][m] == 'C')
				rank[2 * i + 1].first--;
			else if (A[p2][m] == 'C' && A[p1][m] == 'P')
				rank[2 * i + 1].first--;
			else if (A[p2][m] == 'P' && A[p1][m] == 'G')
				rank[2 * i + 1].first--;
		}
		sort(rank.begin(), rank.end());
	}
	rep(i, 2 * N)
		cout << rank[i].second + 1 << endl;
	return (0);
}
