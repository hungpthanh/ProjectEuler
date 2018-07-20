#include <bits/stdc++.h>
#define FOR(i,a,b) for (int i=a; i <=b ; i++)
#define FO(i,a,b) for (int i=a; i < b ; i++)
#define FORD(i,a,b) for (int i=a; i >=b ; i--)
#define FORV(i,a) for(typeof(a.begin()) i = a.begin(); i != a.end(); i++)
#define SET(arr,c) memset(arr,c,sizeof(arr))
#define ll long long
#define ull unsigned long long
#define mp make_pair
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define PI 2 * acos(0.0)
#define debug cout << "#PASS" << endl;
#define sqr(x) (x) * (x)
#define cube(x) (x) * (x) * (x)
using namespace std;
 
template <class T> int getbit(int i, T X) { return (X & (1<<(i-1))); }
template <class T> T onbit(int i, T X) { return (X | (1<<(i-1))); }
template <class T> T offbit(int i, T X) { return (X | (1<<(i-1)) - (1<<(i-1))); }
template <class T> T gcd(T a, T b) {T r; while(b!=0) {r=a%b;a=b;b=r;} return a;}
template <class T> T lcm(T a, T b) { return a / gcd(a, b) * b; }
 
int dx[4]={0, 0, -1, 1};
int dy[4]={-1, 1, 0, 0};
 
typedef pair <ll, ll> II;
typedef pair <int, II> III;
 
const int inf = 1e9;
const ll linf = 1e18;
const int maxn = 1e4 + 5;
const int MOD = 1e9 + 7;

int T, N;
long long F[maxn];

void init() {
	F[1] = 1;
	F[2] = 2;
	FOR(i, 3, maxn) F[i] = F[i - 1] + 1ll * i * (i - 1) * i / 2;
}

int main() {
	init();
	cin >> T;
	FOR(test, 1, T) {
		cin >> N;
		if (N == 1) cout << 0 << endl;
		else cout << 2 * F[N] << endl;
	}	
}
