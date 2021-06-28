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
	int num = 0;
	while (cin >> num) {
		int i = 2;
		while (num % i != 0 && i <= num) {
			i++;
		}
		if (i == num)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}