#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int	main()
{
	int	N;
	cin >> N;
	vector<int>	lst(N);
	vector<int>	lst2(N);
	int	A;
	for (int i = 0; i < N; i++)
	{
		cin >> A;
		lst.at(i) = A;
		lst2.at(i) = A;
	}
	sort(lst.begin(), lst.end());
	int ans_v = lst[N - 2];
	for (int i = 0; i < N; i++)
	{
		if (lst2.at(i) == ans_v)
		{
			cout << i + 1 << endl;
			return (0);
		}
	}
}
