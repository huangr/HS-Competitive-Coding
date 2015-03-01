#include <iostream>
#include <string>
using namespace std;

int main() {
	string s[150];
	int len;
	cin >> len;
	for(int i = 1; i <= len/2; i++) {
		for(int j = 1; j <= len; j++) {
			s[i] += '*';
		}
		for(int j = len/2 + 1 - (i-1); j <= len/2 + 1 + (i-1); j++) {
			s[i][j-1] = 'D';
		}
	}
	for(int i = 1; i <= len; i++) {
		s[len/2 + 1] += 'D';
	}
	for(int i = 1; i <= len/2 + 1; i++) {
		cout << s[i] << '\n';
	}
	for(int i = len/2; i >= 1; i--) {
		cout << s[i] << '\n';
	}
	return 0;
}