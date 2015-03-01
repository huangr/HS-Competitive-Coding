#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	string s;
	cin >> s;
	int arr[150];
	int size = (s.length()+1)/2;
	int ct = 0;
	while(s.length() != 0) {
		arr[ct] = s[0] - '0';
		ct++;
		s.erase(0,2);
	}
	vector<int> vec (arr, arr+size);
	sort(vec.begin(), vec.end());
	for(int i = 0; i < vec.size(); i++) {
		cout << vec[i];
		if(i != vec.size()-1) cout << '+';
	}
	cout << '\n';
	return 0;
}