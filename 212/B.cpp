#include <bits/stdc++.h>
using namespace std;

int	main()
{
	string	pass;
	cin >> pass;
	vector<int>	ps;

	for (auto c : pass)
		ps.push_back(c - '0');
	if (ps[0] == ps[1] && ps[1] == ps[2] && ps[2] == ps[3])
	{
		cout << "Weak" << endl;
		return (0);
	}
	int	before = ps[0];
	for (int i = 1; i < 4; i++)
	{
		if ((before + 1 != ps[i]) && !(before == 9 && ps[i] == 0))
		{
			cout << "Strong" << endl;
			return (0);
		}
		before = ps[i];
	}
	cout << "Weak" << endl;
}
