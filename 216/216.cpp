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

string	ten_to_base(ll num, ll b, string base)
{
	string	str;
	while (1)
	{
		str.push_back(base[num % b]);
		if (num < b)
			break;
		num /= b;
	}
	reverse(str.begin(), str.end());
	return (str);
}

int	main()
{
	ll	N; cin >> N;
	string	str = ten_to_base(N, 2, "01");
	rep(i, str.size())
	{
		if (str[i] == '1')
			cout << "A";
		if (i != str.size() - 1)
			cout << "B";
	}
	cout << endl;
	return (0);
}
