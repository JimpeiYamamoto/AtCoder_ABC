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
	ld	r, x, y;
	cin >> r >> x >> y;
	ld	len = sqrt(x * x + y * y);
	ll	div = len / r;
	ld	mod = (ld)len - div * r;
	if (len <= r)
	{
		if (len == r)
			cout << 1 << endl;
		else
			cout << 2 << endl;
	}
	else if (mod != 0)
		cout << div + 1 << endl;
	else
		cout << div << endl;
	return (0);
}
