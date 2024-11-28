#include <bits/stdc++.h>
 
#define OP(name) if (fopen(name".inp", "r"))  freopen(name".inp", "r", stdin), freopen(name".out", "w", stdout)
 
#define Inu "Inu"
using namespace std;
using ll = long long; 
 
#define FOR(i, a, b)   for (int i = (a); i <= (b); ++i)
#define FOD(i, a, b)   for (int i = (a); i >= (b); --i)
#define REP(i, n)      for (int i = 0; i < (n); ++i)
#define all(x)         (x).begin(), (x).end()
#define pb             push_back 
#define fi             first
#define se             second
 
const int MAX = 1e6 + 1; 
const int MOD = 1e9 + 7; 
 
int f[MAX]; 
 
int main() {
    // OP(Inu);
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int n; cin >> n; 
    f[0] = 1; 
    // f[1] = 1;
    FOR(i, 1, n) {
        FOR(j, 1, 6) 
            if (i - j >= 0) f[i] = (f[i] + f[i - j]) % MOD; 
    }
    cout << f[n];
    cerr << "[" << 1.0 * clock() / CLOCKS_PER_SEC << "s]";
    return 0;
