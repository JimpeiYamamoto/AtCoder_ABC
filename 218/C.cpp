#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;
using Graph = vector< vector<int> >;
vector<bool> seen;

int	tate_enable_dec(vector< vector<int> > S, int N)
{
	int	s_yoko = 0;
	bool	s_flag;
	rep(i, N)
	{
		s_flag = true;
		rep(j, N)
		{
			if (S[i][j] == 1)
				s_flag = false;
		}
		if (s_flag == true)
			s_yoko++;
		else
			return (s_yoko);
	}
	return (s_yoko);
}

int	yoko_enable_dec(vector< vector<int> > S, int N)
{
	int	s_yoko = 0;
	bool	s_flag;
	rep(i, N)
	{
		s_flag = true;
		rep(j, N)
		{
			if (S[j][i] == 1)
				s_flag = false;
		}
		if (s_flag == true)
			s_yoko++;
		else
			return (s_yoko);
	}
	return (s_yoko);
}

void	put_(vector< vector<int> > dp, int n)
{
	for (int i = 0; i < n + 1; i++)
	{
		int	size = dp[i].size();
		for (int j = 0; j < size; j++)
			cout << dp[i][j] << " ";
		cout << endl;
	}
}

int	main()
{
	int	N;
	cin >> N;
	vector< vector<int> >	S(N, vector<int>(N));
	vector< vector<int> >	T(N, vector<int>(N));
	char map;
	rep(i, N)
	{
		rep(j, N)
		{
			cin >> map;
			if (map == '#')
				S[i][j] = 1;
			else
				S[i][j] = 0;
		}
	}
	rep(i, N)
	{
		rep(j, N)
		{
			cin >> map;
			if (map == '#')
				T[i][j] = 1;
			else
				T[i][j] = 0;
		}
	}
	int	s_to_t_tate = tate_enable_dec(S, N) - tate_enable_dec(T, N);
	int	s_to_t_yoko = yoko_enable_dec(S, N) - yoko_enable_dec(T, N);
	bool	flag = true;
	rep(i, N)
	{
		rep(j, N)
		{
			if ((j - s_to_t_yoko >= 0) && (j - s_to_t_yoko < N))
			{
				if ((i - s_to_t_tate >= 0) && (i - s_to_t_tate < N))
				{
					if (S[i][j] != T[i - s_to_t_tate][j - s_to_t_yoko])
						flag = false;
				}
			}
		}
	}
	if (flag == true)
	{
		cout << "Yes" << endl;
		return (0);
	}
	vector< vector<int> >	t_S(N, vector<int>(N));
	rep (i, N)
	{
		rep (j, N)
		{
			t_S[i][j] = S[j][i];
		}
	}
	s_to_t_tate = tate_enable_dec(t_S, N) - tate_enable_dec(T, N);
	s_to_t_yoko = yoko_enable_dec(t_S, N) - yoko_enable_dec(T, N);
	flag = true;
	rep(i, N)
	{
		rep(j, N)
		{
			if ((j - s_to_t_yoko >= 0) && (j - s_to_t_yoko < N))
			{
				if ((i - s_to_t_tate >= 0) && (i - s_to_t_tate < N))
				{
					if (t_S[i][j] != T[i - s_to_t_tate][j - s_to_t_yoko])
						flag = false;
				}
			}
		}
	}
	if (flag == true)
	{
		cout << "Yes" << endl;
		return (0);
	}
	rep (i, N)
	{
		rep (j, N)
		{
			t_S[i][j] = S[N - j - 1][N - i - 1];
		}
	}
	s_to_t_tate = tate_enable_dec(t_S, N) - tate_enable_dec(T, N);
	s_to_t_yoko = yoko_enable_dec(t_S, N) - yoko_enable_dec(T, N);
	flag = true;
	rep(i, N)
	{
		rep(j, N)
		{
			if ((j - s_to_t_yoko >= 0) && (j - s_to_t_yoko < N))
			{
				if ((i - s_to_t_tate >= 0) && (i - s_to_t_tate < N))
				{
					if (t_S[i][j] != T[i - s_to_t_tate][j - s_to_t_yoko])
						flag = false;
				}
			}
		}
	}
	if (flag == true)
	{
		cout << "Yes" << endl;
		return (0);
	}
	vector< vector<int> >	tmp(N, vector<int>(N));
	tmp = t_S;
	rep (i, N)
	{
		rep (j, N)
		{
			t_S[i][j] = tmp[j][i];
		}
	}
	s_to_t_tate = tate_enable_dec(t_S, N) - tate_enable_dec(T, N);
	s_to_t_yoko = yoko_enable_dec(t_S, N) - yoko_enable_dec(T, N);
	flag = true;
	rep(i, N)
	{
		rep(j, N)
		{
			if ((j - s_to_t_yoko >= 0) && (j - s_to_t_yoko < N))
			{
				if ((i - s_to_t_tate >= 0) && (i - s_to_t_tate < N))
				{
					if (t_S[i][j] != T[i - s_to_t_tate][j - s_to_t_yoko])
						flag = false;
				}
			}
		}
	}
	if (flag == true)
	{
		cout << "Yes" << endl;
		return (0);
	}
	cout << "No" << endl;
	return (0);
}

