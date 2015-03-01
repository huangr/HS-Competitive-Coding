#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int a;
	for(int i = 1; i <= 5; i++) {
		for(int j = 1; j <= 5; j++ ) {
			cin >> a;
			if (a == 1) {
				cout << max(j-3, 3-j) + max(i-3, 3-i) << '\n';
				return 0;
			}
		}
	}
}