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
  int n;
  cin >> n;
  int mark[n + 1];
  memset(mark, 0, sizeof mark); 
  for (int i = 1; i <= n; ++i){
  	int x;
  	cin >> x;
  	mark[x] = 1; 
  } 
  for (int i = 1; i <= n; ++i)
  	if (mark[i] == 0) return cout << i << '\n', 0;
  return 0;
}
