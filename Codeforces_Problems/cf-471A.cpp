#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	int arr[10]={0};
	arr[a]++;
	arr[b]++;
	arr[c]++;
	arr[d]++;
	arr[e]++;
	arr[f]++;
	bool ele = false;
	bool bear = false;
	for(int i = 1; i <= 9; i++) {
		if(arr[i] >= 4) {
			arr[i] -= 4;
			for(int j = 1; j <= 9; j++) {
				if(arr[j] == 2) {
					ele = true;
					break;
				}
			}
			if(!ele) bear = true;
		}
	}
	if(ele) cout << "Elephant" << '\n';
	if(bear) cout << "Bear" << '\n';
	if(!ele & !bear) cout << "Alien" << '\n';
	return 0;
}