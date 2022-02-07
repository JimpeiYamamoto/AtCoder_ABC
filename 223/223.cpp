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
	vector<ld>	A(N), B(N), C(N);

	ld	len = 0.0;
	rep(i, N)
	{
		cin >> A[i] >> B[i];
		C[i] = A[i] / B[i];
		len += C[i];
	}
	ld	half = len / 2.0;
	ld	ans = 0.0;
	rep(i, N)
	{
		if (half >= C[i])
		{
			half -= C[i];
			ans += A[i];
		}
		else
		{
			ans += half * (B[i] / A[i]) * A[i];
			break;
		}
	}
	printf("%.10Lf\n", ans);
	return (0);
}
