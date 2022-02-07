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
	//vector< vector<ll> >	LL(N, vector<ll>(1));
	vector< vector<ll> >	LL(N);
	rep(i, N)
	{
		ll	L; cin >> L;
		rep(j, L)
		{
			ll	a; cin >> a;
			LL[i].push_back(a);
		}
	}
	sort(LL.begin(), LL.end());
	LL.erase(unique(LL.begin(), LL.end()), LL.end());
	ll	ans = 0;
	for (auto l_l : LL)
	{
		ans++;
	}
	cout << ans << endl;
	return (0);
}
