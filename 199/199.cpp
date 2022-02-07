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
	string	S; cin >> S;
	ll	Q; cin >> Q;
	ll	cnt = 0;
	rep(i, Q)
	{
		ll	t, a, b; cin >> t >> a >> b;
		a--; b--;
		if (t == 1)
		{
			if (cnt % 2 == 1)
			{
				if (a >= N)
					a -= N;
				else
					a += N;
				if (b >= N)
					b -= N;
				else
					b += N;
			}
			swap(S[a], S[b]);
		}
		else
			cnt++;
	}
	if (cnt % 2 == 0)
		cout << S;
	else
	{
		rep(i, N)
			cout << S[N + i];
		rep(i, N)
			cout << S[i];
	}
	cout << endl;
	return (0);
}
