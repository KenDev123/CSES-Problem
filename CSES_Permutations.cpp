#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0); 
 
	int n;
	cin>>n;
	if (n==1) return cout<<"1",0;
	if (n<4) return cout<<"NO SOLUTION",0;
	if (n==4) return cout<<"2 4 1 3",0;
	for(int i=1;i<=n;i+=2) cout<<i<<' ';
	for(int i=2;i<=n;i+=2) cout<<i<<' ';	
 
//	cout <<"1";
	return 0; 
