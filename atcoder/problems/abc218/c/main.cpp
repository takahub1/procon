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
	vi p(26);
	for(int i=0;i<26;i++){
		cin >> p.at(i);
	}
	for(int i=0;i<26;i++){
		printf("%c",p.at(i)+96);
	}

	return 0;
}
