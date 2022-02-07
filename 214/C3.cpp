#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for(int i = 0; i < N; i++)

int	main()
{
	int	N;
	cin >> N;
	vector<int>	S(N), T(N);

	rep(i, N) cin >> S[i];
	rep(i, N) cin >> T[i];
	for(int i = 1; i < 2 * N; i++)
		T[i%N] = min(T[i % N], T[(i - 1) % N] + S[(i - 1) % N]);
	rep(i, N)
		cout << T[i] << endl;
}
