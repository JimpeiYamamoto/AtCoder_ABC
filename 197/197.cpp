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
	ll	H, W, X, Y; cin >> H >> W >> X >> Y;
	vector<string>	S(H);
	rep(i, H)
		cin >> S[i];
	ll	ans = 0;
	for (ll i = X - 1; i < H; i++)
	{
		if (S[i][Y - 1] == '#')
			break;
		else
			ans++;
	}
	for (ll i = X - 1; i >= 0; i--)
	{
		if (S[i][Y - 1] == '#')
			break;
		else
			ans++;
	}
	for (ll i = Y - 1; i < W; i++)
	{
		if (S[X - 1][i] == '#')
			break;
		else
			ans++;
	}
	for (ll i = Y - 1; i >= 0; i--)
	{
		if (S[X - 1][i] == '#')
			break;
		else
			ans++;
	}
	cout << ans - 3 << endl;
	return (0);
}
