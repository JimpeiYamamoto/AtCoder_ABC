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
	ll	ans = 0;
	if (N > 999)
		ans += N - 999;
	if (N > 999999)
		ans += N - 999999;
	if (N > 999999999)
		ans += N - 999999999;
	if (N > 999999999999)
		ans += N - 999999999999;
	if (N > 999999999999999)
		ans += N - 999999999999999;
	if (N > 999999999999999999)
		ans += N - 999999999999999999;
	cout << ans << endl;
	return (0);
}
