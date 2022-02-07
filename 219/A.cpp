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
	int	X; cin >> X;
	if (X >= 90)
	{
		cout << "expert" << endl;
		return (0);
	}
	else if (X < 40)
	{
		cout << 40 - X << endl;
	}
	else if (X < 70)
	{
		cout << 70 - X << endl;
	}
	else
	{
		cout << 90 - X << endl;
	}
	return (0);
}
