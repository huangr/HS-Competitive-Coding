#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	if(min(n, m) % 2 == 0) {
		cout << "Malvika" << '\n';
	}
	else cout << "Akshat" << '\n';
	return 0;
}