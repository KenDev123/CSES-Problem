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
  cout << n << ' '; 
  while (n != 1){
  	if (n & 1){
  		n = n * 3 + 1; 
  	}
  	else n = n /  2; 
  	cout << n << ' ';
  }
  return 0;
