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
	vector< vector<ll> >	A(N);
	vector<ll>	T(N), K(N);
	rep(i, N)
	{
		cin >> T[i];
		ll	k; cin >> k;
		K[i] = k;
		vector<ll>	a(k);
		rep(i, k)
		{
			ll	aa; cin >> aa;
			aa--;
			a[i] = aa;
		}
		sort(a.begin(), a.end());
		reverse(a.begin(), a.end());
		A.push_back(a);
	}
	vector<bool>	ok(N, true);
	map<ll, bool>	mp;
	rep(i, K[N - 1])
		ok[A[N - 1][i]] = false;

	return (0);
}
