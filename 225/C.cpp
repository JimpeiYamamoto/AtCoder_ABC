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
	ll	N, M; cin >> N >> M;
	vector< vector<ll> >	B(N, vector<ll>(M));
	rep(i, N)
	{
		rep(j, M)
			cin >> B[i][j];
	}
	if (N == 1 && M == 1)
	{
		cout << "Yes" << endl;
		return (0);
	}
	if (N == 1)
	{
		rep(i, M - 1)
		{
			if (B[0][i] - B[0][i + 1] != -1)
			{
				cout << "No" << endl;
				return (0);
			}
		}
		cout << "Yes" << endl;
		return (0);
	}
	if (M == 1)
	{
		rep(i, N - 1)
		{
			if (B[i][0] - B[i + 1][0] != -7)
			{
				cout << "No" << endl;
				return (0);
			}
		}
		cout << "Yes" << endl;
		return (0);
	}
	rep(i, N)
	{
		rep(j, M - 1)
		{
			if (B[i][j] - B[i][j + 1] != -1)
			{
				cout << "No" << endl;
				return (0);
			}
		}
	}
	rep(j, M)
	{
		rep(i, N - 1)
		{
			if (B[i][j] - B[i + 1][j] != -7)
			{
				cout << "No" << endl;
				return (0);
			}
		}
	}
	ll	x1 = (B[0][0] + 6) % 7;
	ll	x2 = (B[0][M - 1] + 6) % 7;
	ll	x3 = (B[N - 1][0] + 6) % 7;
	ll	x4 = (B[N - 1][M - 1] + 6) % 7;
	if (x2 - x1 == M - 1 && x4 - x3 == M - 1 && x2 == x4 && x3 == x1)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return (0);
}
