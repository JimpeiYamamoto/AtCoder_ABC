#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;

int	main()
{
	ll	N;
	cin >> N;
	ll	num = 1;
	int	ans = 0;
	while (1)
	{
		num *= 2;
		if (num > N)
			break;
		ans += 1;
	}
	cout << ans << endl;
}

