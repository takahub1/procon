#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
 
using namespace std;
typedef long long ll;
#define vi vector<int>
#define vll vector<long long>
 
int main(void){
	float a;
	cin>>a;
	int x,y;
	x=a;
	y=a*10;
	y=y%10;
	// cout<<x<<":"<<y;
	if(y<=2) cout<<x<<"-";
	else if(y<=6) cout<<x;
	else cout<<x<<"+";

	return 0;
}
