#include <iostream>
using namespace std;

int main() {
	long long n, k;
	cin >> n >> k;
	if(k <= n/2) {
		cout << 2*k-1 << '\n';
		return 0;
	}
	if(k == n/2 + 1 && n % 2 == 1) {
		cout << n << '\n';
		return 0;
	}
	else {if (n % 2 == 0) {
		cout << (k - n/2)*2 << '\n';
	}
	else cout << (k - n/2 - 1) * 2 << '\n';
	}
	return 0;
}