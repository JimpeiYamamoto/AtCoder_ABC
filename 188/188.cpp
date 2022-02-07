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
	ll	n; cin >> n;
	ll	N = 1<<n;
	vector<ll>	A(N);
	rep(i, N)
		cin >> A[i];
	ll	half = N / 2;
	ll	max1 = 0, max2 = 0;
	for (int i = 0; i < half; i++)
		max1 = max(max1, A[i]);
	for (int i = half; i < N; i++)
		max2 = max(max2, A[i]);
	ll	value = min(max1, max2);
	rep(i, N)
	{
		if (value == A[i])
			cout << i + 1 << endl;
	}
	return (0);
}
