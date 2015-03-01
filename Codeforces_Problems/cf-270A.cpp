#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> vec;
	for(int i = 3; i <= 360; i++) {
		if(360 % i == 0) {
			vec.push_back(180-360/i);
		}
	}
	int test;
	cin >> test;
	for(int i = 1; i <= test; i++) {
		int a;
		cin >> a;
		bool ya = false;
		for(int j = 0; j < vec.size(); j++) {
			if(a == vec[j]) {
				ya = true;
				cout << "YES" << '\n';
			}
		}
		if(!ya) cout << "NO" << '\n';
	}
	return 0;
}