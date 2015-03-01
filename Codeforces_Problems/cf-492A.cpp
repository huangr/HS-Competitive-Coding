#include <iostream>

using namespace std;

int main() {
	int sum = 0, n;
	cin >> n;
	bool cool = false;
	int i = 1;
	while(!cool) {
		sum += i * (i+1)/2;
		if(sum > n) {
			i -= 1;
			cout << i << '\n';
			cool = true;
			return 0;
		}
		i++;
	}
	return 0;
}