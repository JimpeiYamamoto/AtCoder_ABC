#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;
using Graph = vector< vector<int> >;
vector<bool> seen;

int	main()
{
	int	N;
	cin >> N;
	map<string, int>	mp;
	bool	flag = false;
	rep(i, N)
	{
		string	s, t;
		cin >> s >> t;
		string ful_name = s + " " +  t;
		mp[ful_name]++;
		if (mp[ful_name] != 1)
		{
			flag = true;
			break;
		}
	}
	if (flag == true)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
