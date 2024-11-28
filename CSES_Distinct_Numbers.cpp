// #pragma GCC optimize("O2")
// #pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i <= (b); ++i)
#define FOD(i, a, b) for (int i = (a); i >= (b); --i)
#define REP(i, n) for (int i = 0; i < (n); ++i) 
#define __Inukani__ signed main()
#define fi first
#define se second
#define pb push_back 
#define sz(x) (int)((x).size())
#define ALL(x) (x).begin(), (x).end()
#define all(x, lim) (x) + 1, (x) + (lim) + 1 
#define mem(f, x) memset(f , x , sizeof(f))
#define file(name)  if (fopen(name".inp", "r")) { freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout); }
#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)
 
using namespace std; 
using ll = long long; 
using pii = pair<int, int>;
using pll = pair<ll, ll>;
 
template<class X, class Y> bool minimize(X &x, const Y &y) { if (x > y) { x = y; return true; } return false; }
template<class X, class Y> bool maximize(X &x, const Y &y) { if (x < y) { x = y; return true; } else return false; }
 
 
const int INT_INF = 1e9, MOD = 1e9+7;
const ll LONG_INF = 1e18; 
 
void SOLVE(){
    int N;
    cin >> N;
 
    vector<int> a(N);
    REP(i, N) cin >> a[i];
 
    sort(ALL(a));
 
    int cnt = 1;
 
    FOR(i, 1, N - 1){
        if (a[i] != a[i - 1]) ++cnt;
    }
    cout << cnt;
}
 
 
__Inukani__{
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    file("SOL")
 
    int test_case = 1; 
    // cin >> test_case;
    while (test_case --> 0){
        SOLVE(); 
    }
 
 
    cerr << "Time elapsed: " << TIME << "s.\n";
