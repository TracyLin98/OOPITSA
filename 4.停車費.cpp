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


int main() {
	int h1, m1, h2, m2;
	cin >> h1;
	cin >> m1;
	cin >> h2;
	cin >> m2;
	int fee = 0;

	int total = (h2 * 60 + m2) - (h1 * 60 + m1);
	if (total < 120) {
		fee = total / 30 * 30;
	}
	else if (total < 240) {
		fee = (total - 120) / 30 * 40 + 4 * 30;
	}
	else {
		fee = (total - 240) / 30 * 60 + 4 * 40 + 4 * 30;
	}
	cout << fee << endl;

	return 0;
}