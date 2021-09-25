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
ll base8_to_ll(string n)
{
	long long res = 0;
	for (int i = 0; i < n.size(); ++i)
	{
		res = res * 8 + int(n[i] - '0');
	}
	return res;
	// ll ans = 0;
	// int x = 1;
	// for (int i = n.length() - 1; i >= 0; i--)
	// {
	// 	ans += int(n.at(i) - '0') * x;
	// 	x *= 8;
	// }
	// return ans;
}
string ll_to_base9(ll n)
{
	string ans;
	if (n == 0)
		return "0";
	while (n > 0)
	{
		ans = char(n % 9 + '0') + ans;
		n /= 9;
	}
	return ans;
}
int main()
{
	string n;
	int k;
	cin >> n >> k;
	for (int j = 0; j < k; j++)
	{
		ll ans = base8_to_ll(n);
		string base9 = ll_to_base9(ans);
		// cout << base9.length() << endl;
		for (int i = 0; i < base9.length(); i++)
		{
			if (base9.at(i) == '8')
				base9.at(i) = '5';
		}
		// cout << base9 << endl;
		n = base9;
		// ll finalans = 0, x10 = 1, x100 = 10;
		// int a = 0;
		// while (ans9 > 0)
		// {
		// 	a = ans9 % 10;
		// 	if (a == 8)
		// 		a = 5;
		// 	finalans += a * x10;
		// 	ans9 /= 10;
		// 	x10 *= 10;
		// 	x100 *= 10;
		// }
		// n = to_string(finalans);
	}
	cout << n << endl;
	return 0;
}