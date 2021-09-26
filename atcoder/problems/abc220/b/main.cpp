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
	int k;
	string a,b;
	cin>>k>>a>>b;
	ll a10=0,b10=0,k10=1;
	for(ll i=1;i<a.size()+1;i++){
		a10+=(a.at(a.size()-i)-'0')*k10;
		k10*=k;
		// cout<<a10<<endl;
	}
	k10=1;
	for(ll i=1;i<b.size()+1;i++){
		b10+=(b.at(b.size()-i)-'0')*k10;
		k10*=k;
		// cout<<b10<<endl;
	}
	cout<<a10*b10;
	return 0;
}
