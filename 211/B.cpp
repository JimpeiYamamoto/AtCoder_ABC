#include <bits/stdc++.h>
using namespace std;

int	main()
{
	vector<int>	ss(4);
	string	tmp;
	for (int i = 0; i < 4; i++)
	{
		cin >> tmp;
		if (tmp == "H")
			ss[i] = 0;
		else if (tmp == "2B")
			ss[i] = 1;
		else if (tmp == "3B")
			ss[i] = 2;
		else
			ss[i] = 3;
	}
	sort(ss.begin(), ss.end());
	ss.erase(unique(ss.begin(), ss.end()), ss.end());
	if (ss.size() == 4)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
