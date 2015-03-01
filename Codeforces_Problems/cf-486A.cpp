#include <iostream>

using namespace std;

int main() {
	long long a;
	cin >> a;
	if(a % 2 == 0) {
		cout << a/2 << '\n';
		return 0;
	}
	else {
		cout << a/2 - a << '\n';
		return 0;
	}
}