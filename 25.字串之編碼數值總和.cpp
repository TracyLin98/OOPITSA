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
	int n = 0;
	cin >> n;
	cin.ignore(1, '\n');
	for (int i = 0; i < n; i++) {
		string str;
		getline(cin, str);
		int len = str.length();
		int sum = 0;
		for (int i = 0; i < len; i++) {
			if (str[i] > 31 && str[i] != 127)
				sum += str[i];
		}
		cout << sum << endl;
	}
	return 0;
}
