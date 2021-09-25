#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <bitset>
#include <map>
#include <deque>

using namespace std;
typedef long long ll;
#define vll vector<long long>
int main()
{
	ll n, m;
	cin >> n >> m;
	vector<vector<int>> v(n);
	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		v.at(a).push_back(b);
		v.at(b).push_back(a);
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		sort(v.at(i).begin(), v.at(i).end());
		int cnt = 0;
		for (int j = 0; j < v.at(i).size(); j++)
		{
			if (i > v.at(i).at(j))
				cnt++;
			// cout << v.at(i).at(j) + 1 << " ";
		}
		if (cnt == 1)
			ans++;
		// cout << endl;
	}
	cout << ans;

	return 0;
}