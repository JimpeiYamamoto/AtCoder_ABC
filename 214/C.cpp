#include <bits/stdc++.h>
using namespace std;

int	main()
{
	int	N;
	cin >> N;
	vector<int>	S(N);
	vector<int>	T(N);
	for (int i = 0; i < N; i++)
		cin >> S[i];
	for (int i = 0; i < N; i++)
		cin >> T[i];
	int	min_ = T[0];
	int	min_s = T[0];
	int	min_t = T[0];
	vector<int>	ans(N + 1, 0);
	ans[0] = min_;
	for (int i = 0; i < N * 2; i++)
	{
		min_ += S[i % N];
		min_s += S[i % N];
		min_t = T[(i + 1) % N];
		if ((min_ <= min_t) && (min_ <= min_s))
		{
			min_ = min_;
			ans[(i + 1) % N] = min_;
		}
		else if (min_s <= min_t && min_s <= min_)
		{
			min_ = min_s;
			ans[(i + 1) % N] = min_s;
		}
		else 
		{
			min_ = min_t;
			ans[(i + 1) % N] = min_t;
		}
	}
	for (int i = 0; i < N; i++)
		cout << ans[i] << endl;
}
