#include <iostream>
using namespace std;
int main() {
	int n, level;
	cin >> n;
	cin >> level;
	int arr[150] = {0};
	int ans = 0;
	for(int i = 1; i <= level; i++) {
		int a;
		cin >> a;
		if(arr[a] == 0) {
			arr[a]++;
			ans++;
		}
	}
	cin >> level;
	for(int i = 1; i <= level; i++) {
		int a;
		cin >> a;
		if(arr[a] == 0) {
			arr[a]++;
			ans++;
		}
	}
	if(ans == n) {
		cout << "I become the guy." << '\n';
		return 0;
	}
	else cout << "Oh, my keyboard!" << '\n';
	return 0;
}