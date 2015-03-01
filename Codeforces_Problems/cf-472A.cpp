#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
	for(int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) {return false;}
	}
	return true;
}

int main() {
	int k;
	cin >> k;
	for(int i = 4; i <= k/2; i++) {
		if(!isPrime(i) && !isPrime(k-i)) {
			cout << i << ' ' << k-i << '\n';
			return 0;
		}
	}
	return 0;
}