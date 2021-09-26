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
	ll n, x;
	cin >> n;
	vll a(n + 1);
	for (int i = 1; i < n + 1; i++)
	{
		cin >> a.at(i);
	}
	cin >> x;
	ll arr1_sum = accumulate(a.begin(), a.end(), 0LL);
	// cout<<arr1_sum<<endl;
	ll asumcnt = x / arr1_sum;
	ll cnt = asumcnt * n;
	ll sum = arr1_sum * asumcnt;
	// cout << cnt << ":" << sum << endl;

	ll soe = 1;
	for (int i = 1; i < n + 1; i++){
		sum+=a.at(i);
		cnt++;
		if(sum>x){
			cout<<cnt;
			return 0;
		}

	}
	// while (sum <= x)
	// {
	// 	cnt++;
	// 	if (soe == n)
	// 		soe = 1;
	// 	sum += a.at(soe);
	// 	soe++;
	// 	// cout << cnt << ":" << sum << endl;
	// }
	// cout << cnt;
	return 0;
}