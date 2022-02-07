#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;
using Graph = vector< vector<int> >;
vector<bool> seen;

int	main()
{
	ll	N;
	cin >> N;
	ll	tmp;
	ll	mod;
	string	ans;
	while (N > 0)
	{
		mod = N % 2;
		if (mod)
		{
			ans.push_back('A');
		}
		N /= 2;
		if (N > 0)
			ans.push_back('B');
	}
	reverse(ans.begin(), ans.end());
	cout << ans << endl;
}
