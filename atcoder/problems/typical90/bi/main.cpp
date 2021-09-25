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
	int q;
	cin >> q;
	vector<int> t(q + 1), x(q + 1);
	for (int i = 1; i < q + 1; i++)
	{
		cin >> t.at(i) >> x.at(i);
	}
	deque<int> dq;
	for (int i = 1; i < q + 1; i++)
	{
		if (t.at(i) == 1)
		{
			dq.push_front(x.at(i));
		}
		else if (t.at(i) == 2)
		{
			dq.push_back(x.at(i));
		}
		else
		{
			cout << dq.at(x.at(i) - 1) << endl;
		}
	}
	return 0;
}