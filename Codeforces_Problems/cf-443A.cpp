#include <iostream>

using namespace std;

int main() {
	int cool[12345] = {0};
	char awesome[1050] = {0};
	cin.getline(awesome, 1000, '\n');
	int ans = 0;
	for(int i = 0; i <= 1000; i++) {
		if('a' <= awesome[i] && 'z' >= awesome[i]) {
			if(cool[awesome[i]] == 0) {
				ans++;
				cool[awesome[i]]++;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}