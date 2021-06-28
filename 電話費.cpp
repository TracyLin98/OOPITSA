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
class bill {
public:
	float in;
	float out;
	float fee;
};

void cal_bill(bill* b) {
	if (b->in <= 300) {
		b->fee += b->in * 3;
	}
	else if (b->in <= 500) {
		b->fee = b->in * 3 * 0.9;
	}
	else if (b->in <= 1000) {
		b->fee = (b->in) * 3 * 0.75;
		//cout << "3 ";
	}
	else {
		b->fee = b->in * 3 * 0.5;
	}

	if (b->out <= 300) {
		b->fee += b->out * 6;
	}
	else if (b->out <= 500) {
		b->fee += b->out * 6;

	}
	else if (b->out <= 1000) {
		b->fee += b->out * 6 * 0.9;
		//cout << "3 ";
	}
	else {
		b->fee += b->out * 6 * 0.75;
	}
}

int main() {
	int n;
	cin >> n;
	bill phone[100];

	for (int i = 0; i < n; i++) {
		phone[i].fee = 0;
		cin >> phone[i].in;
		cin >> phone[i].out;

		cal_bill(&phone[i]);
		cout << (int)phone[i].fee << endl;
	}

	return 0;
}