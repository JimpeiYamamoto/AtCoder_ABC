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
	map<char, int>	alpha;
	string	X; cin >>X;
	rep(i, X.size())
		alpha[X[i]] = i + 1;
	int	N; cin >> N;
	vector<int>			score;
	map<int, string>	mp;
	rep(i, N)
	{
		string	s; cin >> s;
		ll	tmp = 0;
		ll	digit = 10000000000;
		rep(j, s.size())
		{
			tmp += digit * alpha[s[j]];
			digit /= 10;
		}
		score.push_back(tmp);
		mp[tmp] = s;
		cout << "s=" << s << ", tmp=" <<tmp << endl;
	}
	sort(score.begin(), score.end());
	rep(i, N)
		cout << mp[score[i]] << endl;
	return (0);
}
