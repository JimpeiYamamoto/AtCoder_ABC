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
	ll	index = 1;
	ll	ans = 0;
	while (1)
	{
		string	tmp = to_string(index);
		string	s_index = tmp + tmp;
		if (N < stoll(s_index))
			break;
		else
			ans++;
		index++;
	}
	cout << ans << endl;
	return (0);
}
