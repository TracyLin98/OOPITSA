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

void computeLPSArray(string pat, int M, int* lps);

void KMPSearch(string pat, string txt, int* count)
{
	int M = pat.length();
	int N = txt.length();

	int lps[10000];

	computeLPSArray(pat, M, lps);

	int i = 0; // index for txt[]
	int j = 0; // index for pat[]
	while (i < N) {
		if (pat[j] == txt[i]) {
			j++;
			i++;
		}

		if (j == M) {
			*count += 1;
			j = lps[j - 1];
		}

		// mismatch after j matches
		else if (i < N && pat[j] != txt[i]) {
			if (j != 0)
				j = lps[j - 1];
			else
				i = i + 1;
		}
	}
}

void computeLPSArray(string pat, int M, int* lps)
{

	int len = 0;

	lps[0] = 0;

	int i = 1;
	while (i < M) {
		if (pat[i] == pat[len]) {
			len++;
			lps[i] = len;
			i++;
		}
		else // (pat[i] != pat[len])
		{

			if (len != 0) {
				len = lps[len - 1];
			}
			else
			{
				lps[i] = 0;
				i++;
			}
		}
	}
}

int main()
{
	string pat, txt;
	int count = 0;
	cin >> pat >> txt;
	KMPSearch(pat, txt, &count);
	cout << count << endl;
	return 0;
}
