#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int sum = 0;
	int ans = 0;
	int cool;
	cin >> cool;
	for(int i = 1; i <= cool; i++) {
		int a;
		cin >> a;
		sum += a;
		ans = max(ans, -1 * sum);
	}
	cout << ans << '\n';
	return 0;
}