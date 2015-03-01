#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

bool paircomp(pair<int, int> a, pair<int, int> b) {return (a.first < b.first);}
int main() {
	int s, n;
	cin >> s >> n;
	vector<pair<int, int> > vec;
	int str[1005];
	int gain[1005];
	for(int i = 1; i <= n; i++) {
		cin >> str[i]; 
		cin >> gain[i];
	}
	for(int i = 1; i <= n; i++) {
		vec.push_back(make_pair(str[i], gain[i]));
	}
	sort(vec.begin(), vec.end(), paircomp);
	bool die = false;
	for(int i = 0; i < n; i++) {
		if(s > vec[i].first) {
			s += vec[i].second;
		}
		else {
			
			die = true;
			break;
		}
	}
	if(die) cout << "NO" << '\n';
	else cout << "YES" << '\n';
}