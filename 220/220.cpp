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
	vector<ll>	A(N);
	ull	s_a = 0;;
	rep(i, N)
	{
		cin >> A[i];
		s_a += A[i];
	}
	ll	X; cin >> X;
	ll	ans = X / s_a;
	X %= s_a;
	ans *= N;
	ll	i = 0;
	while (X >= 0)
	{
		X -= A[i];
		i++;
		ans++;
	}
	cout << ans << endl;
	return (0);
}
