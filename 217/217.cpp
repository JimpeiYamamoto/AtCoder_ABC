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
	vector<ll>	P(N + 1), Q(N + 1);
	for (ll i = 1; i <= N; i++)
		cin >> P[i];
	for (ll i = 1; i <= N; i++)
	{
		Q[P[i]] = i;
	}
	for (ll i = 1; i <= N; i++)
		cout << Q[i] << " ";
	cout << endl;
	return (0);
}
