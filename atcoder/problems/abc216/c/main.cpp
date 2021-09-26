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
	ll n;
	cin >> n;
	string s;
	while (n >= 2)
	{
		if (n % 2 == 1)
		{
			n--;
			s = "A" + s;
			// cout<<"A"<<n<<endl;
		}
		else
		{
			n /= 2;
			s = "B" + s;
			// cout<<"B"<<n<<endl;
		}
	}
	s = "A" + s;
	cout << s;
	return 0;
}
