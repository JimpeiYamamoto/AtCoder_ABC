#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;

int	main()
{
	int	N;
	cin >> N;
	vector<int>	A(N);
	rep(i, N) cin >> A[i];
	sort(A.begin(), A.end());
	rep(i, N)
	{
		if (i + 1 != A[i])
		{
			cout << "No" << endl;
			return (0);
		}
	}
	cout << "Yes" << endl;
}
