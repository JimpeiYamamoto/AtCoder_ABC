#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

void	put_vect(vector<int> vec)
{
	int		size;

	size = vec.size();
	for (int i = 0; i < size; i++)
		cout << vec.at(i);
}

void	put_pair(pair<int, int>data)
{
	cout << data.first << " " << data.second << endl;
}

int	main()
{
	int	H, W, N;

	cin >> H >> W >> N;
	vector< pair<int, int> >data(N);
	int	i, j;
	for (int l = 0; l < N; l++)
	{
		cin >> i >> j;
		data[l].first = i;
		data[l].second = j;
	}
	for (int l = 0; l < N; l++)
		put_pair(data[l]);
	for (int l = 0; l < H; l++)
	{
		for (int u = 0; u < H; u++)
		{
			
		}
	}
}
