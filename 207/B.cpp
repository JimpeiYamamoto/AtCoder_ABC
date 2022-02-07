#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int	main()
{
	long long	A, B, C, D;
	cin >> A >> B >> C >> D;
	long long	ans = 0;
	long long	b, c;
	if (c - b <= 0)
	{
		cout << "-1" << endl;
		return (0);
	}
	b = A;
	c = 0;
	for (int i = 1; i <= A; i++)
	{
		b += B;
		c += C;
		if (b <= c * D)
		{
			cout << i << endl;
			return (0);
		}

	}
	cout << "-1" << endl;
}
