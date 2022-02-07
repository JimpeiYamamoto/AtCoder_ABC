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
	unordered_set<ll>	s;
	for (ll a = 2; a * a <= N; a++)
	{
		ll	x = a * a;
		while (x <= N)
		{
			s.insert(x);
			x *= a;
		}
	}
	cout << N - s.size() << endl;
	return (0);
}
