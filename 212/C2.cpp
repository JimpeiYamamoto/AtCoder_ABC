#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for(int i = 0; i < N; i++)

int	main()
{
	int	N, M;
	cin >> N >> M;
	vector<int>	A(N), B(M);
	rep(i, N) cin >> A[i];
	rep(i, M) cin >> B[i];
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	int	i, j, ans;
	i = 0;
	j = 0;
	ans = abs(A[0] - B[0]);
	while (i < N && j < M)
	{
		if (A[i] > B[j])
			j++;
		else
			i++;
		ans = min(ans, abs(A[i] - B[j]));
	}
	cout << ans << endl;
}
