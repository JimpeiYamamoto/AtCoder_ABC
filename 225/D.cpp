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
	ll	N; Q; cin >> N >> Q;
	deque<ll>	deq;
	rep(i, Q)
	{
		ll	tmp; cin >> tmp;
		if (tmp == 1)
		{
			ll	x, y; cin >> x >> y;
			if (deq.size == 0)
				deq.push_back(x);
			deq.push_back(y);
		}
		else if (tmp == 2)
		{
			ll	x, y; cin >> x >> y;
			
		}
		else 
		{
			ll	x; cin >> x;
			
		}
	}
	return (0);
}
