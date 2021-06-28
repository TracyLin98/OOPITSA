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
    string line;
    getline(cin, line);
    int num;
    cin >> num;


    for (unsigned int i = 0; i < line.length(); i++) {
        int charater = line[i];
        if ((charater >= 'A' && charater <= 'Z')) {
            charater += num;
            if (charater > 'Z')
                charater -= 26;
        }
        else if ((charater >= 'a' && charater <= 'z')) {
            charater += num;
            if (charater > 'z')
                charater -= 26;
        }

        else if (charater >= '0' && charater <= '9') {
            charater += num;
            if (charater > '9')
                charater -= 10;
        }
        line[i] = charater;
        cout << line[i];
    }
    cout << endl;
    return 0;
}