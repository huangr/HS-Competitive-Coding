#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int arr[100050] = {0};
	int n;
	int cash = 0;
	int a, b;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> a >>  b;
		arr[a*60 + b]++;
		cash = max(cash, arr[a*60 + b]);
	}
	cout << cash << '\n';
	return 0;
}