#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < n; i++)

int	main()
{
	int	N, A, X, Y;
	cin >> N >> A >> X >> Y;

	int	num = 0;
	if (N > A)
		num = N - A;
	if (num != 0)
		cout << A * X + num * Y << endl;
	else
		cout << N * X << endl;
}
