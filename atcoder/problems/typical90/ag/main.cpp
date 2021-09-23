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
	int h, w;
	cin >> h >> w;
	if (h == 1 || w == 1)
	{
		cout << h * w;
	}
	else
	{
		cout << ((h + 1) / 2) * ((w + 1) / 2) << endl;
	}
	return 0;
}