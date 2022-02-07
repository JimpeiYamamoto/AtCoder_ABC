#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int	main()
{
	int	N, K;
	cin >> N >> K;
	vector<int>	c(N);
	rep(i, N) cin >> c[i];
	map<int, int>	mp;

	int	cnt = 0;
	int	ans = 0;
	for (int k = 0; k < K; k++)
	{
		mp[c[k]]++;
		if (mp[c[k]] == 1)
			cnt++;
	}
	ans = max(ans, cnt);
	for (int i = 0; i + K < N; i++)
	{
		mp[c[i]]--;
		if (mp[c[i]] == 0)
			cnt--;
		mp[c[i + K]]++;
		if (mp[c[i + K]] == 1)
			cnt++;
		ans = max(ans, cnt);
	}
	cout << ans << endl;
}
