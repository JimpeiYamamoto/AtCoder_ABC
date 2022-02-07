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
	ll	N, M;
	cin >> N >> M;
	vector<ll>	A(M), B(M);
	rep(i, M)
		cin >> A[i] >> B[i];
	ll	K; cin >> K;
	vector<ll>	C(K), D(K);
	rep(i, K)
		cin >> C[i] >> D[i];
	ll	ans = 0;
	for (int bit = 0; bit < (1<<K); bit++)
	{
		map<ll, ll>	mp;
		for (int i = K - 1; i >= 0; i--)
		{
			if (bit & (1 << i))
				mp[C[i]]++;
			else
				mp[D[i]]++;
		}
		ll	tmp = 0;
		rep(i, M)
		{
			if (mp[A[i]] > 0 && mp[B[i]] > 0)
				tmp++;
		}
		ans = max(ans, tmp);
	}
	cout << ans << endl;
	return (0);
}
