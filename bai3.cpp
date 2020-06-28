#include<bits/stdc++.h>
#define ll long long 
 using namespace std ;
 const ll mod=1e9+7;
 
 int main(){
 int t; cin>>t;
 while(t--){
 	int n; cin>>n;
 	int a[n+1];
 	for(int i=0;i<n;i++){
 		cin>>a[i];
	 }
	 sort(a,a+n);
	 ll max=0;
	 for(int i=0;i<n;i++){
	 	max+=a[i]*i;
	 	max=max%mod;
	 }
	 cout<<max<<endl;
 }
 
 
 
 return 0;
 }

