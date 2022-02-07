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
	string	S, T; cin >> S >> T;
	if (S == T)
	{
		cout << "Yes" << endl;
		return (0);
	}
	string	S_cpy = S;
	for (int i = 0; i < S.size() - 1; i++)
	{
		swap(S_cpy[i], S_cpy[i + 1]);
		if (S_cpy == T)
		{
			cout << "Yes" << endl;
			return (0);
		}
		S_cpy = S;
	}
	cout << "No" << endl;
	return (0);
}
