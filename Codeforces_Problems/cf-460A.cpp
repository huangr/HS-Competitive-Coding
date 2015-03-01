#include <iostream>

using namespace std;

int main() {
	int a; int b;
	cin >> a >> b;
	int daynum = 0;
	while(a != 0) {
		daynum++;
		a--;
		if(daynum % b == 0) {
			a++;
		}
	}
	cout << daynum << '\n';
	return 0;
}