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
	int input = 0;
	while (cin >> input) {
		double mile = input * 1.6;
		cout << fixed;
		cout << setprecision(1) << mile << endl;
	}

	return 0;
}