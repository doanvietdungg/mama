#include<bits/stdc++.h>
#define ll long long 
 using namespace std ;
  const ll mod=1e9+7;
 
 int main(){
 int t; cin>>t;
 while(t--){
 	ll n; cin>>n;
 	int a[n+1],b[n+1];
 	for(int i=0;i<n;i++){
 		cin>>a[i];
	 }
	 sort(a,a+n);
	 for(int i=0;i<n;i++){
	 	cin>>b[i];
	 }
	 sort(b,b+n,greater<ll>()); 
	 ll sum=0;
	 for(int i=0;i<n;i++){
	 	sum+=a[i]*b[i];
	 	
	 }
	 cout<<sum<<endl;
 }
 
 
 
 return 0;
 }

