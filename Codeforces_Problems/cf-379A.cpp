#include <iostream>

using namespace std;

int main() {
	int a; int b; int k = 0; cin >> a >> b; int ct = 0; while(a > 0 || k >= b) {ct += a; k += a - (a/b) * b; if(a < b) {a = k; k = a - a/b * b;} a /= b; } cout << ct << '\n'; return 0 ;
}