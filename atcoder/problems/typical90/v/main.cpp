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
ll gcd(ll x, ll y)
{
	while (y > 0)
	{
		ll r = x % y;
		x = y;
		y = r;
	}
	return x;
}
int main()
{
	ll a, b, c;
	cin >> a >> b >> c;
	ll r = gcd(a, gcd(b, c));
	// cout << r;
	cout << a/r + b/r + c/r - 3;
	return 0;
}