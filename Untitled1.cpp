#include<bits/stdc++.h>
 using namespace std ;
 vector<int>a;
 
 int main(){
 int t;cin>t;
 while(t--){
 	long long n;
 	cin>>n;
 	while(n){
 		a.push_back(n%10);
 		n=n/10;
 		
	 }
	 reverse(a.begin(),a.end());
 }
 
 
 
 return 0;
 }

