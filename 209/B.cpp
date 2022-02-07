#include <bits/stdc++.h>
using namespace std;

int	main()
{
	int	N, X;
	cin >> N >> X;
	vector<int>	a(N);
	int	tmp;
	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		if (i % 2 == 0)
			a[i] = tmp;
		else
			a[i] = tmp - 1;
	}
	int	sum = accumulate(a.begin(), a.end(), 0);
	if (sum > X)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
}
