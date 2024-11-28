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
  string s;
  cin >> s;
  int ans = 0, cnt = 0; 
  for (int i = 0; i < s.size(); ++i){
  	int pos = i; 
  	while (s[pos] == s[i] && pos < s.size()) ++pos, cnt++; 
  	maximize(ans, cnt); 
  	cnt = 0; 
  	i = pos - 1; 
  }
  cout << ans;
  return 0;
}
