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
	int n;
	cin >> n;
	for (ll i = 0; i < (1 << n); i++)
	{
		string c = "";
		// cout << i << endl;
		for (int j = n - 1; j >= 0; j--)
		{
			if (i & (1 << j))
			{
				c += ")";
			}
			else
			{
				c += "(";
			}
		}
		// cout << c << endl;
		int depth =0;
		int f=0;
		for (int j = n - 1; j >= 0; j--)
		{
			if (i & (1 << j))
			{
				depth--;
			}
			else
			{
				depth++;
			}
			if(depth<0){
				f=1;
			}
		}
		if(depth!=0){
			f=1;
		}
		if(f==0){
			cout <<c<<endl;
		}
	}
	return 0;
}