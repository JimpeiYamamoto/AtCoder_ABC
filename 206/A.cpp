#include <bits/stdc++.h>
using namespace std;

int	main()
{
	double	N;
	cin >> N;
	int	v = (int)(N * 1.08);
	if (v < 206)
		cout << "Yay!" << endl;
	else if (v == 206)
		cout << "so-so" << endl;
	else
		cout << ":(" << endl;
}
