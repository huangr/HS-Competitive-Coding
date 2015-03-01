#include <iostream>

using namespace std;

int main() {
	int a;
	int b;
	int acc;
	cin >> acc;
	if(acc >= 0) cout << acc << '\n';
	else {
		a = acc/10;
		b = acc/100*10 + acc % 10;
		if(a < b) {
			cout << b << '\n';
		}
		else cout << a << '\n';
	}
	return 0;
}