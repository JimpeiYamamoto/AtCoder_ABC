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
	string	S; cin >> S;
	int	K; cin >> K;
	sort(S.begin(), S.end());
	rep(i, K - 1)
		next_permutation(S.begin(), S.end());
	cout << S << endl;
	return (0);
}
