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

int main()
{
    int year = 0;
    while (cin >> year)
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
            cout << "Bissextile Year" << endl;
        else
            cout << "Common Year" << endl;
    return 0;
}
