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
	ll n, k;
	cin >> n >> k;
	vll a(n + 1), b(n + 1);
	for (ll i = 1; i < n + 1; i++)
	{
		cin >> a.at(i);
	}
	for (ll i = 1; i < n + 1; i++)
	{
		cin >> b.at(i);
	}
	ll ans = 0;
	int f = 0;
	for (ll i = 1; i < n + 1; i++)
	{
		ans += std::abs(a.at(i) - b.at(i));
		if (ans > k)
		{
			f = 1;
		}
		// cout << ans << endl;
	}
	if (std::abs(ans - k) % 2 == 0 && f == 0)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	return 0;
}