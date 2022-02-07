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
	int	len = s.size();
	if (s[len - 1] == 'r' && s[len - 2] == 'e')
		cout << "er" << endl;
	else
		cout << "ist" << endl;
	return (0);
}
