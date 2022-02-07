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
long long	modd = 998244353;

int	main()
{
	ll	N; cin >> N;
	vector<ll>	A(N), B(N);
	rep(i, N)
		cin >> A[i];
	rep(i, N)
		cin >> B[i];
	ull	ans = 1;
	ll	mi = min(A[0], B[0]);
	ll	ma = max(A[0], B[0]);
	rep(i, N - 1)
	{
		ma = max(A[i], B[i]);
		ll	ne_ma = max(A[i + 1], B[i + 1]);
		ll	tmp = 0;
		for (ll i = mi; i <= ma; i++)
			tmp += ne_ma - i + 1;
		mi = ne_ma - ma + 1;
		ans = (ans * tmp) % modd;
	}
	cout << ans % modd << endl;
	return (0);
}
