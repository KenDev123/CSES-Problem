#include <bits/stdc++.h>
 
using namespace std;
 
 
template<class X, class Y> bool minimize(X &x, const Y &y){ 
	if (x > y){ 
		x = y; 
		return true; 
	} 
	return false;
}
template<class X, class Y> bool maximize(X &x, const Y &y){ 
	if (x < y){ 
		x = y;
		return true;
	}  
	return false;
}
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0); 
  long long n;
  cin >> n;
  vector<long long> a(n);
  for (long long i = 0; i < n; ++i) cin >> a[i];
  long long res = 0; 
  for (long long i = 1; i < n; ++i){
  	if (a[i] < a[i - 1]){
  		res += abs(a[i] - a[i - 1]); 
  		a[i] += abs(a[i] - a[i - 1]); 
  	}
  }
  cout << res;
  return 0;
