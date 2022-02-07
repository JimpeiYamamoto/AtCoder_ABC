#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;

int	main()
{
	ll	A, B, C, D;
	cin >> A >> B >> C >> D;

	ll	all_b, all_r;
	all_b = A;
	all_r = 0;
	for (int i = 1; i <= A; i++)
	{
		all_b += B;
		all_r += C;
		if (all_b <= all_r * D)
		{
			cout << i << endl;
			return (0);
		}
	}
	cout << -1 << endl;
}
