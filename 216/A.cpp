#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;
using Graph = vector< vector<int> >;
vector<bool> seen;

int	main()
{
	double	num;
	cin >> num;
	int	small = (num - int(num)) * 10;
	int	big = int(num);
	if (small >= 0 && small <= 2)
		cout << big << "-" << endl;
	else if (small >= 3 && small <= 6)
		cout << big << endl;
	else
		cout << big << "+" << endl;
}
