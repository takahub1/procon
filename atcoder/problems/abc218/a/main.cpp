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
	int n;
	string s;
	cin >> n >> s;
	if(s.at(n-1) == 'x'){
		cout << "No";
	}else{
		cout << "Yes";
	}
	
	return 0;
}
