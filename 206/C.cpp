#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, N) for (int i = 0; i < N; i++)

int	main()
{
	int	N;
	cin >> N;
	vector<int>		A(N);
	map<int, int>	mp;
	rep(i, N)
	{
		cin >> A[i];
		mp[A[i]]++;
	}
	ll	ans = 0;
	for (int i = 0; i < N - 1; i++)
	{
		ans += (N - i - 1) - (mp[A[i]] - 1);
		mp[A[i]]--;
	}
	cout << ans << endl;
}
