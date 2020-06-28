#include<bits/stdc++.h>
 using namespace std ;
 
 
 int main(){
 int t; cin>>t;
 while(t--){
 	int n; 
	 long long k;
	 cin>>n>>k;
 	long long  a[n];
 	int b=0;
 	for(int i=1;i<=n;i++){
 		cin>>a[i];
 		if(a[i]<=k){
 			b++;
		 }
	 }
	 if(b!=0){
	 	cout<<b<<endl;
	 }
	 else cout<<"-1"<<endl;
 }
 
 
 
 return 0;
 }

