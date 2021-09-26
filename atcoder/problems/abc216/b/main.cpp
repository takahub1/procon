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
	int n;
	cin >> n;
	vector<string> s(n + 1), t(n + 1);
	for (int i = 1; i < n + 1; i++)
	{
		cin >> s.at(i) >> t.at(i);
	}
	int ans = 0;
	for (int i = 1; i < n + 1; i++)
	{
		for (int j = 1; j < n + 1; j++)
		{
			if((s.at(i)==s.at(j)) && (t.at(i)==t.at(j))){
				ans++;
			}
		}
	}
	if (ans > n)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	return 0;
}
