#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <bitset>
#include <map>

using namespace std;
typedef long long ll;
#define vi vector<int>
#define vll vector<long long>
int main()
{
	ll n;
	cin >> n;
	vector<string> s(n + 1);
	for (ll i = 1; i < n + 1; i++)
		cin >> s.at(i);
	map<string, ll> m;

	for (ll i = 1; i < n + 1; i++)
	{
		if (m[s.at(i)] == 0)
		{
			cout << i << endl;
		}
		m[s.at(i)]++;
	}

	// for (ll i = 2; i < n + 1; i++)
	// {
	// 	int f = 0;

	// 	if (*find(s.begin() + 1, s.end(), s.at(i)) == s.at(i))
	// 	{
	// 		cout << "ok" << s.at(i) << endl;
	// 	}
	// 	else
	// 	{
	// 		cout << "ng" << s.at(i) << endl;
	// 	}

	// 	// for (ll j = 1; j < i + 1; j++)
	// 	// {
	// 	// 	if (s.at(i) == s.at(j))
	// 	// 	{
	// 	// 		f++;
	// 	// 	}
	// 	// }
	// 	// if (f == 1)
	// 	// {
	// 	// 	cout << i << endl;
	// 	// }
	// }
	return 0;
}