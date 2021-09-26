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
	int a, b, c;
	cin >> a >> b >> c;
	for(int i=1;i<1001;i++){
		if((a <= c*i) && (c*i<=b)){
			cout<<c*i;
			return 0;
		}
	}
	cout<<"-1";

	// if (b < c)
	// 	cout << "-1";
	// else if ((a <= c) && (b >= c))
	// 	cout << c;
	// else if (b - a < c)
	// 	cout << "-1";
	// else
	// {
	// 	for (int i = 1; i < 1001; i++)
	// 	{
	// 		if (a <= c * i)
	// 		{
	// 			cout << c * i;
	// 			return 0;
	// 		}
	// 	}
	// }
	return 0;
}
