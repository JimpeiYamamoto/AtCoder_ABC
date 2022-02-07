#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int	main()
{
	int	a;
	int	b;
	cin >> a >> b;

	vector<int> A(8), B(8), C(8);
	for (int i = 0; i < 8; i++)
	{
		A[7 - i] = a % 2;
		a /= 2;
		B[7 - i] = b % 2;
		b /= 2;
	}
	for (int i = 0; i < 8; i++)
	{
		if (!B[i] && !A[i])
			C[i] = 0;
		else if (!B[i] && A[i])
			C[i] = 1;
		else if (B[i] && !A[i])
			C[i] = 1;
		else
			C[i] = 0;
	}
	int	ans = 0;
	int	bi = 1;
	for (int i = 0; i < 8; i++)
	{
		ans += C[7 - i] * bi;
		bi *= 2;
	}
	cout << ans << endl;
}
