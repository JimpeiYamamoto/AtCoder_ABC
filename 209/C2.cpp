#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int	main()
{
	int	N;
	cin >> N;
	vector<int>	C(N);
	rep(i, N) cin >> C[i];

	sort(C.begin(), C.end());
	long long	ans = 1;
	rep(i, N)
		ans = ans * max(0, (C[i] - i)) % 1000000007;
	cout << ans << endl;
}
