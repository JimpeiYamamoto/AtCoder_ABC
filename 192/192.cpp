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
	ll	N, K; cin >> N >> K;
	ll	f = N;
	string	g1, g2;
	rep(i, K)
	{
		g2 = to_string(f);
		sort(g2.begin(), g2.end());
		g1 = g2;
		reverse(g1.begin(), g1.end());
		f = stoll(g1) - stoll(g2);
	}
	cout << f << endl;
	return (0);
}
