#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for(int i = 0; i < N; i++)

int	main()
{
	int	H, W, N;
	cin >> H >> W >> N;
	vector<int>	X(N), Y(N);
	rep(i, N)
	{
		cin >> X[i];
		cin >> Y[i];
	}
	vector<int>	X_sort(N), Y_sort(N);
	X_sort = X;
	Y_sort = Y;
	sort(X_sort.begin(), X_sort.end());
	X_sort.erase(unique(X_sort.begin(), X_sort.end()), X_sort.end());
	sort(Y_sort.begin(), Y_sort.end());
	Y_sort.erase(unique(Y_sort.begin(), Y_sort.end()), Y_sort.end());
	rep(i, N)
	{
		cout << lower_bound(X_sort.begin(), X_sort.end(), X[i]) - X_sort.begin() + 1 << " ";
		cout << lower_bound(Y_sort.begin(), Y_sort.end(), Y[i]) - Y_sort.begin() + 1 << endl;
	}
}
