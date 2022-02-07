#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;
typedef unsigned long long ull;
using Graph = vector< vector<int> >;
vector<bool> seen;
long double	PI = 3.14159265358979;
long long	POW18 = 1000000000000000000LL;
long long	mod9 = 1000000007;

int	main()
{
	ll	N; cin >> N;
	vector<ll>	vec(POW18, 0);
	ll	stop_max = 0;
	rep(i, N)
	{
		ll	a, b;
		cin >> a >> b;
		ll	start = a;
		ll	stop = a + b;
		stop_max = max(stop_max, stop);
		for (ll i = start; i < stop; i++)
			vec[i]++;
	}
	sort(vec.begin(), vec.end());
	ll	j = 0;
	while (vec[j] == 0)
		j++;
	for (ll i = 1; i <= N; i++)
	{
		ll	cnt = 0;
		while (vec[j] == i)
		{
			cnt++;
			j++;
		}
		cout << cnt << " ";
	}
	cout << endl;
	return (0);
}
