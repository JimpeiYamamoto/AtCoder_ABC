#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int	main()
{
	int	A, B, C;
	cin >> A >> B >> C;
	if (A < B && A < C)
		cout << B + C << endl;
	else if (B < A && B < C)
		cout << A + C << endl;
	else
		cout << A + B << endl;
}
