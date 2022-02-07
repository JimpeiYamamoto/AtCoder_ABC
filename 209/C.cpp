#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int	main()
{
	int	N;
	cin >> N;
	vector<int>	c(N);
	rep(i, N)
		cin >> c[i];
	sort(c.begin(), c.end());
	long long	cnt = 1;
	rep(i, N)
		cnt = cnt * max(0, c[i] - i) % 1000000007;
	cout << cnt << endl;
}
