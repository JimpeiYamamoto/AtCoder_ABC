#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for(int i = 0; i < N; i++)

int	main()
{
	string	S;
	cin >> S;
	int		size = S.size();
	string	str = "chokudai";
	vector< vector<int> >	dp(str.size() + 1, vector<int>(size + 1, 0));
	rep(j, size + 1)
		dp[0][j] = 1;
	for (int i = 1; i < str.size() + 1; i++)
	{
		for(int j = 1; j < size + 1; j++)
		{
			if (S[j - 1] == str[i - 1])
				dp[i][j] = (dp[i][j - 1] + dp[i - 1][j - 1]) % 1000000007;
			else
				dp[i][j] = (dp[i][j - 1] );
		}
	}
	cout << dp[str.size()][size] << endl;
}
