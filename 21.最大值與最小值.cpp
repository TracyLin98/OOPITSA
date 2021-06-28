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
#include <cstring>


using namespace std;

int main() {
	float arr[10];
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}

	float max = arr[0];
	float min = arr[0];

	for (int i = 1; i < 10; i++) {
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min) {
			min = arr[i];
		}
	}

	cout << fixed;
	cout << setprecision(2) << "maximum:" << max << endl
		<< setprecision(2) << "minimum:" << min << endl;
	return 0;
}
