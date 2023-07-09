#include <bits/stdc++.h>

#define int long long

#define vlong vector<long>
#define vint vector<int>
#define vchar vector<char>
#define vbool vector<bool>

#define CININT(n) INTCIN(n);
#define INTCIN(n) int n; cin >> n;
#define INTCINVINTCIN(a, n) INTCIN(n); vint a(n); CINV(a, n);

#define ICVK(n, k, a) 			CININT(n); CININT(k); vint a(n); CINV(a, n);
#define ICVK1(n, k, a) 			ICVK(n, k, a)
#define ICVK2(n, k, h, a) 		CININT(n); CININT(k); CININT(h); vint a(n); CINV(a, n);
#define ICVK3(n, k, h, m, a)	CININT(n); CININT(k); CININT(h); CININT(m); vint a(n); CINV(a, n);

#define CIN(n) 			cin >> n;
#define COUT(n) 		cout << n;

#define CINV(a, n) 		for (int i = 0; i < n; i++) {cin >> a[i];}
#define CINVV(a, b, n) 	for (int i = 0; i < n; i++) {cin >> a[i] >> b[i];}

#define COUTV(a, n) 	for (int i = 0; i < n; i++) {cout << a[i] << " ";}
#define COUTVV(a, b, n) 	for (int i = 0; i < n; i++) {cout << a[i] << " " << b[i] << "\n";}

#define NOSPACE(a, n) 	for (int i = 0;i < n;i++) {cout << a[i];}
#define ENDL cout << "\n";

#define SORT(a) sort(a.begin(), a.end());
#define REVERSE(a) reverse(a.begin(), a.end());
using namespace std;


void pre() {}

// you can do this!
const bool DO_ENDL = true;
const bool MULTI_T = true;
void solve() {
}


signed main() {
	pre();
	if (not MULTI_T)
		solve();
		return 0;
	
	CININT(t);
	while (t--) {
		solve();
		if (DO_ENDL)
			ENDL;
	}
}
