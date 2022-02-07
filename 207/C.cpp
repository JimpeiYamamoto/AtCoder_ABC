#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int	main()
{
	int	N;
	cin >> N;
	vector<int>	t(N), l(N), r(N);
	rep(i, N)
		cin >> t[i] >> l[i] >> r[i];
	int	ans = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (r[i] == l[j])
			{
				if ((t[i] == 1 || t[i] == 3) && (t[j] == 1 || t[j] == 2))
					ans++;
			}
			else if (r[j] == l[i])
			{
				if ((t[j] == 1 || t[j] == 3) && (t[i] == 1 || t[i] == 2))
					ans++;
			}
			else if (r[i] > l[j] && l[i] < r[j])
				ans++;
			else if (r[j] > l[i] && l[j] < r[i])
				ans++;
		}
	}
	cout << ans << endl;
}
