#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;

int	main()
{
	ll	A, B, C;
	cin >> A >> B >> C;
	if (A == B)
		cout << "=" << endl;
	else if (C % 2 != 0)
	{
		if (A >= 0 && B < 0)
			cout << ">" << endl;
		else if (B >= 0 && A < 0)
			cout << "<" << endl;
		else if (A >= 0 && B >= 0)
		{
			if (A > B)
				cout << ">" << endl;
			else
				cout << "<" << endl;
		}
		else
		{
			if (A > B)
				cout << "<" << endl;
			else
				cout << ">" << endl;
		}
	}
	else
	{
		if (abs(A) == abs(B))
			cout << "=" << endl;
		else
		{
			if (abs(A) > abs(B))
				cout << ">" << endl;
			else
				cout << "<" << endl;
		}
	}
}
