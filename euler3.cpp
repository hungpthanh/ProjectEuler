#include<bits/stdc++.h>
using namespace std;

int T;
long long N;

long long get_max_prime(long long N) {
	long long res = 2;
	for (long long i = 2; i * i <= N; i++) {
		while (N % i == 0) {
			// cout << "N = " << N << endl;
			// cout << "i = " << i << endl;
			N /= i;
			// cout << "N = " << N << endl;
			res = i;
		}
	}
	if (N > 1) res = N;
	return res;
}

int main() {
	cin >> T;
	for (int test = 1; test <= T; test++) {
		cin >> N;
		cout << get_max_prime(N) << endl;
	}
	return 0;
}
