#include <bits/stdc++.h>
using namespace std;

vector <int> v;
int T, N;

bool isPalidrome(int N) {
	string s = "";
	while (N > 0) {
		int nb = N % 10;
		s += (char)(nb + '0');
		N /= 10;
	}
	string s1 = s;
	reverse(s.begin(), s.end());
	return (s == s1);

}
void generate_palidrome() {
	for (int i = 100; i <= 998; i++)
		for (int j = i + 1; j <= 999; j++) {
			if (isPalidrome(i * j)) v.push_back(i * j);
        }
}

int main() {
	generate_palidrome();
	sort(v.begin(), v.end());
	cin >> T;
	for (int test = 1; test <= T; test++) {
		cin >> N;
		cout << *(--lower_bound(v.begin(), v.end(), N)) << endl;
	}
}
