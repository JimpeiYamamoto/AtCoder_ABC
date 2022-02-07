#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < n; i++)

int	main()
{
	int	N, K;
	cin >> N >> K;
	vector<int>	C(N);
	rep(i, N) cin >> C[i];
	int	ans = 0;
	rep(i, N - K + 1)
	{
		vector<int>	tmp {C.begin() + i, C.begin() + i + K};
		sort(tmp.begin(), tmp.end());
		tmp.erase(unique(tmp.begin(), tmp.end()), tmp.end());
		if (tmp.size() == 0 && ans == 0)
			ans = 1;
		else if (ans < tmp.size())
			ans = tmp.size();
	}
	cout << ans << endl;
}
