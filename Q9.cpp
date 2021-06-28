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
    cin >> num;

    int times = 0;
    times = num / 3;

    int total = 0;
    if (times < 1) {
        cout << 0 << endl;
    }
    else {
        cout << (1 + times) * 3*times / 2 << endl;
    }

    return 0;
}
