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
	ll	N;
	ll	X;
	cin >> N >> X;
	ll	sum_al = 0;
	rep(i, N)
	{
		ll	v, p; cin >> v >> p;
		sum_al += v * p;
		if (sum_al > X * 100)
		{
			cout << i + 1 << endl;
			return (0);
		}
	}
	cout << "-1" << endl;
	return (0);
}
