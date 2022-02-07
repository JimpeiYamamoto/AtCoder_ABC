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
	vector<ll>	X(N), Y(N);
	rep(i, N)
		cin >> X[i] >> Y[i];
	ll	ans = 0;
	ll	all = 0;
	for (ll i = 0; i < N; i++)
	{
		for (ll j = i + 1; j < N; j++)
		{
			for (ll k = j + 1; k < N; k++)
			{
				if ((!(X[i] == X[j] && X[j] == X[k])) &&
					(!(Y[i] == Y[j] && Y[j] == Y[k])))
				{
					ld	x1 = (ld)X[i] - (ld)X[j];
					ld	y1 = (ld)Y[i] - (ld)Y[j];
					ld	x2 = (ld)X[j] - (ld)X[k];
					ld	y2 = (ld)Y[j] - (ld)Y[k];
					ld	x3 = (ld)X[k] - (ld)X[i];
					ld	y3 = (ld)Y[k] - (ld)Y[i];
					if (x1 / x2 != y1 / y2)
						ans++;
				}
			}
		}
	}
	cout << ans << endl;
	return (0);
}
