#include <bits/stdc++.h>
using namespace std;

int	main()
{
	int	Q;
	cin >> Q;
	priority_queue<long long, vector<long long>, greater<long long> > pq;
	vector<long long>	s(Q, 0);
	int	ope, x;
	long long	sum = 0;
	for (int q = 0; q < Q; q++)
	{
		cin >> ope;
		if (ope == 1)
		{
			cin >> x;
			pq.push(x - sum);
		}
		else if (ope == 2)
		{
			cin >> x;
			sum += x;
		}
		else
		{
			cout << pq.top() + sum << endl;
			pq.pop();
		}
	}
}
