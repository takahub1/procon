#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>

using namespace std;
typedef long long ll;
#define vi vector<int>
#define vll vector<long long>

int main(void)
{
	vector<string> s(3);
	string t;
	cin >> s.at(0) >> s.at(1) >> s.at(2) >> t;
	for (int i = 0; i < t.length(); i++)
	{
		if (t[i] == '1')
		{
			cout << s.at(0);
		}
		if (t[i] == '2')
		{
			cout << s.at(1);
		}
		if (t[i] == '3')
		{
			cout << s.at(2);
		}
	}
	return 0;
}
