#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int arr[1050]; 
	for(int i = 0; i < m; i++) {
		cin >> arr[i];
	}
	vector<int> vec (arr, arr+m);
	sort(vec.begin(), vec.end());
	int yum = 99009090;
	for(int i = 0; i <= vec.size()-n; i++) {
		yum = min(yum, vec[i+n-1] - vec[i]);
	}
	cout << yum << '\n';
	return 0;
}