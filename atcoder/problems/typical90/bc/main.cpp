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
	ll n, p, q;
	cin >> n >> p >> q;
	vll a(n + 1);
	ll ans = 0;
	for (ll i = 1; i < n + 1; i++)
		cin >> a.at(i);
	for (int f = 1; f < n + 1; f++)
	{
		for (int b = f + 1; b < n + 1; b++)
		{
			for (int c = b + 1; c < n + 1; c++)
			{
				for (int d = c + 1; d < n + 1; d++)
				{
					for (int e = d + 1; e < n + 1; e++)
					{
						// cout << a.at(f) * a.at(b) * a.at(c) * a.at(d) * a.at(e);
						if (a.at(f) * a.at(b) % p* a.at(c) % p* a.at(d) % p* a.at(e) % p == q)
						{
							ans++;
						}
					}
				}
			}
		}
	}
	cout << ans;
	return 0;
}