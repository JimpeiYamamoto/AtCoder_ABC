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
	ll	N, K; cin >> N >> K;
	vector< pair<ll, ll> >	p(N);
	rep(i, N)
	{
		ll	a, b; cin >> a >> b;
		p[i] = make_pair(a, b);
	}
	sort(p.begin(), p.end());
	ll	len = 0;
	rep(i, N)
	{
		if (i == 0)
			len = p[0].first;
		else
			len = p[i].first - p[i - 1].first;
		K = K - len;
		if (K < 0)
		{
			cout << K + p[i].first << endl;
			return (0);
		}
		K += p[i].second;
	}
	cout << K + p[N - 1].first << endl;
	return (0);
}
