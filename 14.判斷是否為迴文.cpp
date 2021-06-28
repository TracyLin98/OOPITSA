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
	string s;
	cin >> s;

	int len = s.length();
	bool flag = true;
	for (int i = 0; i < len / 2; i++) {
		if (s[i] != s[len - i - 1]) {
			flag = false;
		}
	}
	if (flag == true)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}