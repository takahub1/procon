#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <bitset>

using namespace std;
typedef long long ll;
#define vi vector<int>
#define vll vector<long long>

int main()
{
	int h, w;
	cin >> h >> w;
	vector<vector<int>> a(h, vector<int>(w));
	vector<vector<int>> b(h, vector<int>(w));
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cin >> a.at(i).at(j);
		}
	}
	vector<int> sum_h(h);
	vector<int> sum_w(w);
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			sum_h.at(i) += a.at(i).at(j);
		}
	}
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < h; j++)
		{
			sum_w.at(i) += a.at(j).at(i);
		}
	}

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			b.at(i).at(j) += sum_w.at(j);
			// for (int k = 0; k < h; k++)
			// {
			// 	b.at(i).at(j) += a.at(k).at(j);
			// }

			b.at(i).at(j) += sum_h.at(i);
			// for (int l = 0; l < w; l++)
			// {
			// 	b.at(i).at(j) += a.at(i).at(l);
			// }

			b.at(i).at(j) -= a.at(i).at(j);
		}
	}
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cout << b.at(i).at(j);
			if (j != w - 1)
			{
				cout << " ";
			}
		}
		if (i != h - 1)
		{
			cout << endl;
		}
	}
	return 0;
}