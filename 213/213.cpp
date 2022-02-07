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
	ll	H, W, N; cin >> H >> W >> N;
	vector<ll>	A(N), B(N);
	rep(i, N)
		cin >> A[i] >> B[i];
	vector<ll>	A_cpy, B_cpy;
	A_cpy = A; B_cpy = B;
	sort(A.begin(), A.end());
	A.erase(unique(A.begin(), A.end()), A.end());
	sort(B.begin(), B.end());
	B.erase(unique(B.begin(), B.end()), B.end());
	rep(i, N)
	{
		cout << lower_bound(A.begin(), A.end(), A_cpy[i]) - A.begin() + 1 << " ";
		cout << lower_bound(B.begin(), B.end(), B_cpy[i]) - B.begin() + 1 << endl;
	}
	return (0);
}
