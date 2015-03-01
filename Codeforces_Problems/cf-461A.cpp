#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> vec;
	for(int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		vec.push_back(a);
	}
	sort(vec.begin(), vec.end());
	long long sum = 0;
	for(int i = 0; i < vec.size(); i++) {
		sum += (long long) vec[i] * (long long) (i+2);
	}
	sum -= vec[vec.size()-1];
	cout << sum << '\n';
	return 0;
}