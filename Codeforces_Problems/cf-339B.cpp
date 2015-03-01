#include <iostream>
using namespace std;


int main() {
	int n, m;
	cin >> n >> m;
	int task[105000];
	for(int i = 1; i <= m; i++) {
		cin >> task[i];
	}
	int cur = 1;
	long long walk = 0;
	for(int i = 1; i <= m; i++) {
		if(task[i] < cur) {
			walk += (long long) n - cur;
			walk += (long long) task[i];
			cur = task[i];
			continue;
		}
		else {
			walk += (long long) task[i] - cur;
			cur = task[i];
		}
	}
	cout << walk << '\n';
	return 0;
}