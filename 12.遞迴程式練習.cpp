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
int f(int n) {
	if (n == 0 || n == 1) {
		return n + 1;
	}
	else if (n > 1) {
		return f(n - 1) + f(ceil(n / 2));
	}
}

int main() {
	int num = 0;
	cin >> num;

	cout << f(num) << endl;

	return 0;
}