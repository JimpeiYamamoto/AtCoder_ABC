#include <bits/stdc++.h>
using namespace std;

int	main()
{
	int	H, W, N;
	cin >> H >> W >> N;
	vector<int>	A(N);
	vector<int>	B(N);

	for (int i = 0; i < N; i++)
		cin >> A[i] >> B[i];
	vector<int>	A_s(N), B_s;
	A_s = A;
	B_s = B;
	sort(A_s.begin(), A_s.end());
	A_s.erase(unique(A_s.begin(), A_s.end()), A_s.end());
	sort(B_s.begin(), B_s.end());
	B_s.erase(unique(B_s.begin(), B_s.end()), B_s.end());
	auto	a_beg = A_s.begin();
	auto	b_beg = B_s.begin();
	auto	a_end = A_s.end();
	auto	b_end = B_s.end();
	for (int i = 0; i < N; i++)
		cout << lower_bound(a_beg, a_end, A[i]) - a_beg + 1 << " " << lower_bound(b_beg, b_end, B[i]) - b_beg + 1 << endl;
}
