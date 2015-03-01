#include <iostream>

using namespace std;

int main() {
	int dp[100000] = {0};
	dp[1] = 1;
	int arr[100000];
	int num, finish;
	cin >> num >> finish;
	for(int i = 1; i < num; i++) {
		cin >> arr[i];
	}
	for(int i = 1; i < num; i++) {
		if(dp[i+arr[i]] == 0) dp[i+arr[i]] = dp[i];
	}
	if(dp[finish] == 1) {cout << "YES" << '\n';}
	else cout << "NO" << '\n';
	return 0;
}