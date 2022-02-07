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

ll	poww(ll a, ll b)
{
	ll	ans = 1;
	while (b)
	{
		ans *= a;
		b--;
	}
	return (ans);
}

int	main()
{
	ll	N; cin >> N;
	ll	a = 2, b = 2;
	ll	b2 = b;
	ll	ans = 0;
	while (1)
	{
		if (poww(a, b) > N)
		{
			b = b2;
			a++;
			if (poww(a, b) > N)
				break;
		}
		ans++;
		b++;
	}
	cout << a << endl;
	cout << b << endl;
	cout << N - ans << endl;
	return (0);
}
