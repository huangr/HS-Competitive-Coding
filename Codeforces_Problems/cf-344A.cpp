#include <iostream>

using namespace std;

int main() {
	string s;
	string add;
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> add;
		s += add;
	}
	int mag = 1;
	for(int i = 0; i < s.length()-1; i++) {
		if(s[i] == s[i+1]) {
			mag++;
		}
	}
	cout << mag << '\n';
	return 0;
}