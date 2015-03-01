#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int size;
	vector<int> vec;
	cin >> size;
	for(int i = 1; i <= size; i++) {
		int a;
		cin >> a;
		vec.push_back(a);
	}
	sort(vec.begin(), vec.end());
	for(int i = 0; i < vec.size(); i++) {
		cout << vec[i] << ' ';
	}
	cout << '\n';
	return 0;
}