#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int	main()
{
	long long	N, K;
	cin >> N >> K;
	vector<int>	a(N), s_a(N);
	rep(i, N) cin >> a[i];
	long long	sum = K / N;
	s_a = a;
	sort(s_a.begin(), s_a.end());
	int	index;
	rep(i, N)
	{
		index = lower_bound(s_a.begin(), s_a.end(), a[i]) - s_a.begin();
		if (index < (K - sum * N))
			cout << sum + 1 << endl;
		else
			cout << sum << endl;
	}
}
