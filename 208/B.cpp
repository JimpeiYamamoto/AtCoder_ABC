#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int	get_num(int n)
{
	if (n == 0)
		return (0);
	int	ans = 1;
	for (int i = 1; i <= n; i++)
		ans *= i;
	return (ans);
}

int	main()
{
	int	P;
	cin >> P;

	int	cnt = 0;
	int	now = 10;
	while (P > 0)
	{
		while (P < get_num(now))
			now--;
		P -= get_num(now);
		cnt++;
	}
	cout << cnt << endl;
}
