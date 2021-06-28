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
	int month = 0;
	while (cin >> month) {
		if (month <= 12 && month >= 1) {
			if (month <= 5 && month >= 3) {
				cout << "Spring" << endl;
			}
			else if (month <= 8 && month >= 6) {
				cout << "Summer" << endl;
			}
			else if (month <= 11 && month >= 9) {
				cout << "Autumn" << endl;
			}
			else
				cout << "Winter" << endl;
		}
	}

	return 0;
}
