#include <bits/stdc++.h>
using namespace std;

int T;
long long N;

int main() {
	cin >> T;
	for (int test = 1; test <= T; test++) {
		cin >> N;
		--N;
		long long c1, c2, c3;
		c1 = N / 3;
		c2 = N / 5;
		c3 = N / 15;
		long long res;
		res = 3 * c1 * (c1 + 1) / 2 + 5 * c2 * (c2 + 1) / 2 - 15 * c3 * (c3 + 1)/2;
		cout << res << endl;
	}
}
