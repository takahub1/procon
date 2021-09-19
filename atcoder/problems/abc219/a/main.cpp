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
	int x;
	cin >> x;
	if(x < 40){
		cout << 40-x;
	}
	else if(x < 70){
		cout << 70-x;
	}else if(x < 90){
		cout << 90-x;
	}else{
		cout << "expert";
	}
	return 0;
}
