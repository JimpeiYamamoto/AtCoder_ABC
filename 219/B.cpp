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
	string	S1, S2, S3, T;
	cin >> S1 >> S2 >> S3 >> T;
	int	len = T.size();
	rep(i, len)
	{
		if (T[i] == '1')
		{
			cout << S1;
		}
		else if (T[i] == '2')
		{
			cout << S2;
		}
		else
		{
			cout << S3;
		}
	}
	cout << endl;
	return (0);
}
