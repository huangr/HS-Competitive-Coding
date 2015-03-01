#include <iostream>

using namespace std;

int main() {
	int k;
	cin >> k;
	if (k == 1 || k == 0) {cout << 1 << '\n'; return 0;}
	long long ans = 1;
	for(int i = 2*(k-1); i >= k; i--) {
		ans *= (long long) i;
	}
	for(int i = k-1; i >= 1; i--) {
		ans /= i;
	}
	cout << ans << '\n';
	return 0;
}