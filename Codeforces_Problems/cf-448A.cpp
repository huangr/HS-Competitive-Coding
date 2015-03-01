#include <iostream>

using namespace std;

int main() {
	int cups = 0, medal = 0, a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	int shelves = 0;
	cin >> shelves;
	cups = a+b+c;
	medal = d+e+f;
	int numneed = 0;
	if(cups % 5 != 0) numneed += cups/5 + 1;
	else numneed += cups/5;
	if(medal % 10 != 0) numneed += medal/10 + 1;
	else numneed += medal/10;
	if(numneed > shelves) cout << "NO" << '\n';
	else cout << "YES" << '\n';
	return 0;
}