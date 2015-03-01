#include <iostream>

using namespace std;

int main() {
	int n, m, a, b;
	int money = 0;
	cin >> n >> m >> a >> b;
	if(b < m*a) {
		money += min((n/m) * b + (n - n / m * m) * a, (n/m+1) * b);
	}
	else money += a * n;
	cout << money << '\n';
	return 0;
}