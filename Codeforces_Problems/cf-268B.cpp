#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int sum = 0;
	for(int i = 1; i <= n; i++) {
		sum += i * (n-i);
	}
	sum += n;
	cout << sum << '\n';
	return 0;
}