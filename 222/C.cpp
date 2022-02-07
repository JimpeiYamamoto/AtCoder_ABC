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

vector< vector<ll> >	peaple;

void	sort_(ll N)
{
	for (int i = 0; i < 2 * N; i++)
	{
		for (int j = i; j < 2 * N; j++)
		{
			if (peaple[i][1] < peaple[j][1])
			{
				ll	tmp1, tmp2;
				tmp1 = peaple[i][0];
				tmp2 = peaple[i][1];
				peaple[i][0] = peaple[j][0];
				peaple[i][1] = peaple[j][1];
				peaple[j][0] = tmp1;
				peaple[j][1] = tmp2;
			}
		}
	}
}

int	main()
{
	ll	N, M;
	cin >> N >> M;
	vector<string>	A(N * 2);
	rep(i, 2 * N)
		cin >> A[i];
	peaple.resize(2 * N, vector<ll>(2, 0));
	rep(i, 2 * N)
		peaple[i][0] = i;
	rep(m, M)
	{
		for (ll i = 1; i <= N; i++)
		{
			cout << "i=" << i << endl;
			ll	p1 = peaple[i * 2 - 2][0];
			ll	p2 = peaple[i * 2 - 1][0];
			cout << "p1=" << p1 << endl;
			cout << "p2=" << p2 << endl;
			if (A[p1][m] == 'G' && A[p2][m] == 'C')
				peaple[p1][1]++;
			else if (A[p1][m] == 'C' && A[p2][m] == 'P')
				peaple[p1][1]++;
			else if (A[p1][m] == 'P' && A[p2][m] == 'G')
				peaple[p1][1]++;
			else if (A[p2][m] == 'G' && A[p1][m] == 'C')
				peaple[p2][1]++;
			else if (A[p2][m] == 'C' && A[p1][m] == 'P')
				peaple[p2][1]++;
			else if (A[p2][m] == 'P' && A[p1][m] == 'G')
				peaple[p2][1]++;
		}
		//sort_(N);
		sort(peaple[1].begin(), peaple[1].end());
		reverse(peaple[1].begin(), peaple[1].end());
		rep(i, 2 * N)
			cout << peaple[i][1] << endl;
	}
	rep(i, 2 * N)
		cout << peaple[i][0] + 1 << endl;
	return (0);
}
