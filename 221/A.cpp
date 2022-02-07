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
	ull	A, B;
	cin >> A >> B;
	ull	diff = A - B;
	ull	ans = 1;
	rep(i, diff)
		ans *= 32;
	cout << ans << endl;
	return (0);
}
