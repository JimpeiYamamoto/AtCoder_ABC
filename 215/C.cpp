#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;

int convert(int x, int n){
    int y=0, i=0, z;
    while(x > 0){
        z = x%n;
        y += z*pow(10, i);
        x = x/n;
        i++;
    }
    return y;
}

vector<int>	plus_one(vector<int> S, int digit, int size)
{
	(S[digit])++;
	if ((S[digit]) == size)
	{
		(S[digit]) = 0;
		S = plus_one(S, digit - 1, size);
	}
	return (S);
}

int	main()
{
	string	S;
	ll		K;
	cin >> S >> K;
	sort(S.begin(), S.end());
	int	size = S.size();
	map<char, int>	mp;
	rep(i, size)
		mp[S[i]]++;
	vector<int>	S_n(size);
	rep(i, size)
		S_n[i] = i;
	for (int i = 0; i < K; i++)
	{
		S_n = plus_one(S_n, size - 1, size);
		vector<int>	s(size) S_n;
		sort(s.begin(), s.end());
		rep(j, size - 1)
		{
			if (s[j] == s[j + 1])
			{
			}
		}
	}
	rep(i, size)
		cout << S[S_n[i]];
	cout << endl;
}
