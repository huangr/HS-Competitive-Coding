#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int a;
	int b;
	int ct = 0;
	int numroom;
	cin >> numroom;
	for(int i = 1; i <= numroom; i++) {
		cin >> a >> b;
		if(b-a >= 2) ct++;
	}
	cout << ct << '\n';
	return 0;
}