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
	int ooxx[3][3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> ooxx[i][j];
		}
	}

	int k = 0;
	//vertical;
	for (int i = 0; i < 3; i++)
	{
		if (ooxx[i][0] == ooxx[i][1] && ooxx[i][1] == ooxx[i][2]) {
			cout << "True" << endl;
			return 0;
		}

		if (ooxx[0][i] == ooxx[1][i] && ooxx[1][i] == ooxx[2][i]) {
			cout << "True" << endl;
			return 0;
		}
	}

	if (ooxx[0][0] == ooxx[1][1] && ooxx[1][1] == ooxx[2][2]) {
		cout << "True" << endl;
		return 0;
	}
	if (ooxx[0][2] == ooxx[1][1] && ooxx[1][1] == ooxx[2][0]) {
		cout << "True" << endl;
		return 0;
	}
	cout << "False" << endl;
	return 0;
}
