#include <iostream>

using namespace std;

int main() {
	string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
	string inp;
	string pos;
	cin >> pos;
	cin >> inp;
	string nstr = "";
	if(pos == "L") {
		for(int i = 0; i < inp.length(); i++) {
			for(int j = 0; j < s.length(); j++) {
				if(inp[i] == s[j]) {
					nstr += s[j+1];
				}
			}
		}
	}
	else {
		for(int i = 0; i < inp.length(); i++) {
			for(int j = 0; j < s.length(); j++) {
				if(inp[i] == s[j]) {
					nstr += s[j-1];
				}
			}
		}
	}
	cout << nstr << '\n';
	return 0;
}