#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < n; i++)
using ll = long long;

int	main()
{
	int n, k;
	cin >> n >> k;
	vector<int> c(n);
	rep(i, n) cin >> c[i];
	map<int, int>	mp;
	int	now = 0;
	for (int i = 0; i < k; i++)
	{
		mp[c[i]]++;
		if (mp[c[i]] == 1)
			now++;
	}
	int	ans = now;
	for (int i = 0; i + k < n; i++)
	{
		(mp[c[i]])--;
		if (mp[c[i]] == 0)
			now--;
		(mp[c[i + k]])++;
		if (mp[c[i + k]] == 1)
			now++;
		ans = max(ans, now);
	}
	cout << max(ans, now) << endl;
}
