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
class num {
public:
	int id;
	string pat1;
	string pat2;
	string pat3;
	string pat4;
	string pat5;
};

int main() {
	num digits[10];
	for (int i = 0; i < 10; i++) {
		digits[i].id = i;
	}

	string one = "    *";
	string onel = "*    ";
	string two = "*   *";
	string five = "*****";

	digits[0].pat1 = five;
	digits[0].pat2 = two;
	digits[0].pat3 = two;
	digits[0].pat4 = two;
	digits[0].pat5 = five;

	digits[1].pat1 = one;
	digits[1].pat2 = one;
	digits[1].pat3 = one;
	digits[1].pat4 = one;
	digits[1].pat5 = one;

	digits[2].pat1 = five;
	digits[2].pat2 = one;
	digits[2].pat3 = five;
	digits[2].pat4 = onel;
	digits[2].pat5 = five;

	digits[3].pat1 = five;
	digits[3].pat2 = one;
	digits[3].pat3 = five;
	digits[3].pat4 = one;
	digits[3].pat5 = five;

	digits[4].pat1 = two;
	digits[4].pat2 = two;
	digits[4].pat3 = five;
	digits[4].pat4 = one;
	digits[4].pat5 = one;

	digits[4].pat1 = two;
	digits[4].pat2 = two;
	digits[4].pat3 = five;
	digits[4].pat4 = one;
	digits[4].pat5 = one;

	digits[5].pat1 = five;
	digits[5].pat2 = onel;
	digits[5].pat3 = five;
	digits[5].pat4 = one;
	digits[5].pat5 = five;

	digits[6].pat1 = five;
	digits[6].pat2 = onel;
	digits[6].pat3 = five;
	digits[6].pat4 = two;
	digits[6].pat5 = five;

	digits[7].pat1 = five;
	digits[7].pat2 = one;
	digits[7].pat3 = one;
	digits[7].pat4 = one;
	digits[7].pat5 = one;

	digits[8].pat1 = five;
	digits[8].pat2 = two;
	digits[8].pat3 = five;
	digits[8].pat4 = two;
	digits[8].pat5 = five;

	digits[9].pat1 = five;
	digits[9].pat2 = two;
	digits[9].pat3 = five;
	digits[9].pat4 = two;
	digits[9].pat5 = one;

	int four_num;
	cin >> four_num;
	int cur[4];
	int x=1000;
	for (int i = 0; i < 4; i++) {
		cur[i] = four_num /x ;
		four_num = four_num % x;
		x/=10;
	}



	for (int j = 0; j < 4; j++) {
		cout << digits[cur[j]].pat1 ;
        if(j!=3) cout <<" ";
	}
	cout << endl;
	for (int j = 0; j < 4; j++) {
		cout << digits[cur[j]].pat2;
    if(j!=3) cout <<" ";
	}
	cout << endl;
	for (int j = 0; j < 4; j++) {
		cout << digits[cur[j]].pat3 ;
		if(j!=3) cout << " ";
	}
	cout << endl;
	for (int j = 0; j < 4; j++) {
		cout << digits[cur[j]].pat4;
		if(j!=3) cout << " ";
	}
	cout << endl;
	for (int j = 0; j < 4; j++) {
		cout << digits[cur[j]].pat5;
		if(j!=3) cout << " ";
	}
    cout <<endl;
	return 0;
}
