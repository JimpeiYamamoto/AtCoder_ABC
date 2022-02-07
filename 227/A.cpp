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
	ll	N, K, A;
	cin >> N >> K >> A;
	ll	tmp = A;
	rep(i, K - 1)
	{
		tmp++;
		if (tmp == N + 1)
			tmp = 1;
	}
	cout << tmp << endl;
	return (0);
}
