#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

int	main()
{
	int	N;
	cin >> N;
	vector<int>	S(N);
	vector<int>	T(N);
	rep(i, N) cin >> S[i];
	rep(i, N) cin >> T[i];
	rep(i, N * 2)
		T[(i + 1)%N] = min(T[(i + 1)%N], T[i%N] + S[i%N]);
	rep(i, N) cout << T[i] << endl;
}
