#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int	main()
{
	ll N;
	cin >> N;
	ll sum = 0;
	int	i = 1;
	while (1)
	{
		sum += i;
		if (sum >= N)
			break;
		i++;
	}
	cout << i << endl;
}
