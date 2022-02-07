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
	string	N; cin >> N;
//	cout << stoll(N) << endl;
	sort(N.begin(), N.end());
	ull	ans = 0;
	do
	{
		for (int i = 1; i < N.size(); i++)
		{
			if (N[0] != '0' && N[i] != '0')
			{
				string	n_s1 = N.substr(0, i);
				string	n_s2 = N.substr(i);
				ull		n1 = stoll(n_s1);
				ull		n2 = stoll(n_s2);
				ans = max(ans, n1 * n2);
			}
		}
	} while (next_permutation(N.begin(), N.end()));
	cout << ans << endl;
	return (0);
}
