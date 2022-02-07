#include <bits/stdc++.h>
using namespace std;

int	main()
{
	vector<int>	A, B;
	int			N, M;

	cin >> N >> M;
	int	a, b;
	for (int i = 0; i < N; i++)
	{
		cin >> a;
		A.push_back(a);
	}
	for (int i = 0; i < M; i++)
	{
		cin >> b;
		B.push_back(b);
	}
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	int	min_num, tmp;
	min_num = abs(A[0] - B[0]);
	int	n = 0;
	int	m = 0;
	while (n < N && m < M)
	{
		tmp = abs(A[n] - B[m]);
		if (min_num > tmp)
			min_num  = tmp;
		if (A[n] > B[m])
			m++;
		else
			n++;
	}
	cout << min_num << endl;
}
