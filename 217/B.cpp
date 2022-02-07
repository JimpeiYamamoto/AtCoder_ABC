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
	string	s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	if (s1[1] != 'B' && s2[1] != 'B'&& s3[1] != 'B')
		cout << "ABC" << endl;
	else if (s1[1] != 'R' && s2[1] != 'R' && s3[1] != 'R')
		cout << "ARC" << endl;
	else if (s1[1] != 'G' && s2[1] != 'G' && s3[1] != 'G')
		cout << "AGC" << endl;
	else
		cout << "AHC" << endl;
	return (0);
}
