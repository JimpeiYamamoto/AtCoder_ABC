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
	map<string, ll>	mp;
	vector<string>	S(N);
	rep(i, N)
		cin >> S[i];
	rep(i, N)
	{
		string	s = S[i];
		mp[s]++;
		string	s2;
		if (s[0] == '!')
		{
			s2 = s.substr(1, s.size());
			if (mp[s2] != 0)
			{
				cout << s2 << endl;
				return (0);
			}
		}
		else
		{
			s2 = s;
			s2.insert(0, "!");
			if (mp[s2] != 0)
			{
				cout << s << endl;
				return (0);
			}
		}
	}
	cout << "satisfiable" << endl;
	return (0);
}
