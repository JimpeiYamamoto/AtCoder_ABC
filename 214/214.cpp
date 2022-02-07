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
	vector<ll>	S(N), T(N), A(N, POW18);
	rep(i, N)
		cin >> S[i];
	rep(i, N)
		cin >> T[i];

	A[0] = T[0];
	for (ll i = 1; i < 2 * N; i++)
	{
		ll	tmp = A[(i - 1) % N] + S[(i - 1) % N];
		A[i % N] = min(A[i % N], min(tmp, T[i % N]));
	}
	rep(i, N)
		cout << A[i] << endl;
	return (0);
}
