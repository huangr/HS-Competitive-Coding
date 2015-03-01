#include <iostream>
#include <algorithm>

using namespace std;

int flower[234234];
int diff[234234];
int main() {
	int n;
	cin >> n;
	int lowflow = 1000000000, hiflow = 0, lgdiff = 0, lownum = 0, hinum = 0;
	for(int i = 1; i <= n; i++) {
		cin >> flower[i];
		if(lowflow > flower[i]) {
			lownum = 1;
		}
		if(hiflow < flower[i]) {
			hinum = 1;
		}
		if(lowflow == flower[i]) {
			lownum++;
		}
		if(hiflow == flower[i]) {
			hinum++;
		}
		lowflow = min(lowflow, flower[i]);
		hiflow = max(hiflow, flower[i]);
	}
	lgdiff = hiflow - lowflow;
	long long numpos;
	if(lgdiff != 0) 
		numpos = (long long) lownum *  (long long) hinum;
	else numpos = (long long) lownum * (long long) (lownum-1) / (long long) 2;
	cout << lgdiff << ' ' << numpos << '\n';
	return 0;
}