#include <bits/stdc++.h>
using namespace std;

int T;
long long N, F[105];

int main() {
	F[1] = 1;
	F[2] = 2;
	for (int i = 3; i <= 100; i++) {
		F[i] = F[i - 1] + F[i - 2];
		if (F[i] > 4 * 1e16) break;
	}
	cin >> T;
	long long res = 0;
	for (int test = 1; test <= T; test++) {
		cin >> N;
		res = 0;
		for (int i = 1; i <= 85; i++) if ((F[i] <= N) && (F[i] % 2 == 0)) res += F[i];
		cout << res << endl;
	} 	
}
