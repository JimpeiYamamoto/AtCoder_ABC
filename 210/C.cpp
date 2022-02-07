#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < n; i++)

int	main()
{
	int	N, K;
	cin >> N >> K;
	vector<int>	C(N);
	rep(i, N) cin >> C[i];
	vector<int>	s(N + 1, 0);
	s[0] = 0;
	rep(i, N)
	{
		vector<int>	cp {C.begin(), C.begin() + i};
		sort(cp.begin(), cp.end());
		cp.erase(unique(cp.begin(), cp.end()), cp.end());
		s[i + 1] = cp.size() + 1;
	}
	rep(i, N + 1)
		cout << s[i] << " ";
	cout << endl;
	int	ans = 0;
	rep(i, N - K)
	{
		if (ans <= s[i + K] - s[i])
			ans = s[i + K] - s[i];
	}
	cout << ans << endl;
}
