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
	ll	N, M;
	cin >> N >> M;
	vector<ll>	A(N), B(M);
	rep(i, N) cin >> A[i];
	rep(i, M) cin >> B[i];
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	ll	ans = POW18;
	rep(i, N)
	{
		ll	index = lower_bound(B.begin(), B.end(), A[i]) - B.begin();
		if (index == 0)
			ans = min(min(ans, abs(A[i] - B[index])), abs(A[i] - B[index + 1]));
		else if (index == B.size() - 1)
			ans = min(min(ans, abs(A[i] - B[index])), abs(A[i] - B[index - 1]));
		else
			ans = min(min(min(ans, abs(A[i] - B[index])), abs(A[i] - B[index - 1])), abs(A[i] - B[index - 1]));
	}
	cout << ans << endl;
	return (0);
}
