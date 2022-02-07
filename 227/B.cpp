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
	ll	ss = 0;
	ll	a = 1, b = 1;
	vector<ll>	v;
	rep(i, 1000)
	{
		rep(i, 1000)
		{
			ss = 4 * a * b + 3 * a + 3 * b;
			v.push_back(ss);
			if (ss > 1000)
				break;
			b++;
		}
		b = 1;
		a++;
	}
	sort(v.begin(), v.end());
	ll	ans = 0;
	ll	N; cin >> N;
	rep(i, N)
	{
		ll	s; cin >> s;
		if (binary_search(v.begin(), v.end(), s) == false)
			ans++;
	}
	cout << ans << endl;
	return (0);
}
