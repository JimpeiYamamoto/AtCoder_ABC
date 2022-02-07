#include <bits/stdc++.h>
using namespace std;

int	main()
{
	int	N;
	cin >> N;
	vector<int>	S(N+1);
	vector<int>	T(N+1);
	for (int i = 0; i < N; i++)
		cin >> S[i];
	for (int i = 0; i < N; i++)
		cin >> T[i];
	int	INF = 100100100;
	vector< vector<int> >	dp(N+1, vector<int>(N+1, INF));
	for (int i = 0; i < N + 1; i++)
	{
		dp[i][i] = T[i];
		int	j = 0;
		while (j < i)
		{
			dp[i][j] += S[i];
			j++;
		}
	}
	vector<int>	tmp;
//	vector<int>	tmp2;
//	tmp = dp[0];
//	tmp2 = dp[N];
//	sort(tmp.begin(), tmp.end());
//	sort(tmp2.begin(), tmp2.end());
//	if (tmp[0] < tmp2[0])
//		cout << tmp[0] << endl;
//	else
//		cout << tmp2[0] << endl;
	for (int i = 0; i < N; i++)
	{
		tmp = dp[i];
		sort(tmp.begin(), tmp.end());
		cout << tmp[0] << endl;
	}
}
