#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < n; i++)

int	main()
{
	int		N;
	cin >> N;
	string	S;
	cin >> S;
	rep(i, N)
	{
		if (S[i] == '1' && i % 2 == 0)
		{
			cout << "Takahashi" << endl;
			return (0);
		}
		if (S[i] == '1' && i % 2 == 1)
		{
			cout << "Aoki" << endl;
			return (0);
		}
	}
}
