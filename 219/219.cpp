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
	ll		N; cin >> N;
	vector< pair<string, string> >	P;
	string	old	 = "abcdefghijklmnopqrstuvwxyz";
	rep (i, N)
	{
		string	S; cin >> S;
		ll	len = S.size();
		string	new_s;
		rep(j, len)
		{
			ll	index = lower_bound(old.begin(), old.end(), S[j]) - old.begin();
			new_s.push_back(X[index]);
		}
		P.push_back(make_pair(new_s, S));
	}
	sort(P.begin(), P.end());
	rep(i, N)
		cout << P[i].second << endl;
	return (0);
}
