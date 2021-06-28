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
	int x = 0, y = 0;

	while (cin >> x && cin >> y) {
		double dist = sqrt((x * x + y * y));
		if (dist <= 200) {
			cout << "inside" << endl;
		}
		else cout << "outside" << endl;
	}

	return 0;
}