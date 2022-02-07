#include <bits/stdc++.h>
using namespace std;

int	main()
{
	int	A, B;
	cin >> A >> B;
	long long	up, down;
	up = 6 * A;
	down = 1 * A;
	if (B > up || B < down)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
}
