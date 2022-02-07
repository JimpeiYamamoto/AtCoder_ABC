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
	string	X; cin >> X;
	vector<int>	pos(26);
	rep(i, 26)
		pos[X[i] - 'a'] = i;
	int	N;
	cin >> N;
	vector< vector<int> >	S(N);
	rep(i, N)
	{
		string	s; cin >> s;
		for (int j = 0; j < s.size(); j++)
			S[i].push_back(pos[s[j] - 'a']);
	}
	sort(S.begin(), S.end());
	rep(i, N)
	{
		vector<int>	str = S[i];
		rep(i, str.size())
			cout << X[str[i]];
		cout << endl;
	}
	return (0);
}
