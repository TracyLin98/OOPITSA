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
#include <bitset>

using namespace std;

double FV(double PV, double r) {
	double f = PV * r + PV;
	return f;
}

int main() {
	int num;
	cin >> num;

	bitset <8> bin(num);
	cout << bin << endl;

	return 0;
}