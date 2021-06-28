#include <string>
#include <iostream>
#include <map>
#include <queue>
#include <utility>
#include <climits>
#include <functional>
#include <iomanip>
#include <stack>
#include <cmath>
#include <cfloat>
#include <cstdlib>

using namespace std;
void attack() {
	float ops, obp, h, bb, hbp, ab, sf;
	float slg, tb;
	cin >> h;
	cin >> bb;
	cin >> hbp;
	cin >> ab;
	cin >> sf;
	cin >> tb;

	obp = (h + bb + hbp) / (ab + bb + sf + hbp);
	slg = tb / ab;
	ops = obp + slg;

	cout << fixed;
	cout << setprecision(3) << ops << endl;
}

int main() {
	float whip, p1, p2, p3;
	cin >> p1;
	cin >> p2;
	cin >> p3;
	whip = (p1 + p2) / p3;
	cout << fixed;
	cout << setprecision(2) << whip << endl;

	for (int i = 0; i < 9; i++) {
		attack();
	}

	return 0;
}