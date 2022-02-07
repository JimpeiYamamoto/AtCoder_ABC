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
	string	s; cin >> s;
	if (s[0] == s[1] && s[1] == s[2])
	{
		cout << 1 << endl;
	}
	else if (s[0] == s[1] || s[0] == s[2] || s[1] == s[2])
	{
		cout << 3 << endl;
	}
	else {
		cout << 6 << endl;
	}
	return (0);
}
