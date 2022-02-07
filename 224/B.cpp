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
	ll	H, W; cin >> H >> W;
	vector< vector<ll> >	A(H, vector<ll>(W));
	rep(i, H)
	{
		rep(j, W)
			cin >> A[i][j];
	}
	for (int i1 = 0; i1 < H; i1++)
	{
		for (int i2 = i1 + 1; i2 < H; i2++)
		{
			for (int j1 = 0; j1 < W; j1++)
			{
				for (int j2 = j1 + 1; j2 < W; j2++)
				{
					if (A[i1][j1] + A[i2][j2] > A[i2][j1] + A[i1][j2])
					{
						cout << "No" << endl;
						return (0);
					}
				}
			}
		}
	}
	cout << "Yes" << endl;
	return (0);
}
