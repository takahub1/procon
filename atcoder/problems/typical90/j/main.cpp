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
	ll n;
	cin >> n;
	vi c(n), p(n);
	for (ll i = 0; i < n; i++)
	{
		cin >> c.at(i) >> p.at(i);
	}
	ll q;
	cin >> q;
	vll l(q), r(q);
	for (ll i = 0; i < q; i++)
	{
		cin >> l.at(i) >> r.at(i);
	}

	vll s1(n), s2(n);
	if (c.at(0) == 1)
	{
		s1.at(0) = p.at(0);
	}
	else
	{
		s2.at(0) = p.at(0);
	}

	for (ll i = 1; i < n; i++)
	{
		if (c.at(i) == 1)
		{
			s1.at(i) += p.at(i) + s1.at(i - 1);
			s2.at(i) = s2.at(i - 1);
		}
		else
		{
			s1.at(i) = s1.at(i - 1);
			s2.at(i) += p.at(i) + s2.at(i - 1);
		}
		// cout << i << ":" << s1.at(i) << " " << s2.at(i) << endl;
	}

	for (ll i = 0; i < q; i++)
	{
		ll a = 0, b = 0;
		if (l.at(i) == 1)
		{
			a = s1.at(r.at(i) - 1);
			b = s2.at(r.at(i) - 1);
		}
		else
		{
			a = s1.at(r.at(i) - 1) - s1.at(l.at(i) - 2);
			b = s2.at(r.at(i) - 1) - s2.at(l.at(i) - 2);
		}
		// cout <<s2.at(r.at(i) - 1)<<endl;
		// cout <<s2.at(l.at(i) - 1)<<endl;
		// for (ll qq = l.at(i) - 1; qq < r.at(i); qq++)
		// {
		// 	if (c.at(qq) == 1)
		// 	{
		// 		a += p.at(qq);
		// 	}
		// 	else
		// 	{
		// 		b += p.at(qq);
		// 	}
		// }
		cout << a << " " << b << endl;
	}

	return 0;
}