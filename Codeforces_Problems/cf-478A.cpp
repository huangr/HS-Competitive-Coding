#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	if((a+b+c+d+e) % 5 != 0 || (a+b+c+d+e)==0) {
		cout << "-1" << '\n'; return 0;
	}
	else cout << (a+b+c+d+e)/5 << '\n'; return 0;
}