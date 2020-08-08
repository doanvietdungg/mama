#include<bits/stdc++.h>
 using namespace std ;
 
 
 int main(){
 int t; cin>>t;
 while(t--){
 	int n; cin>>n;
 	int a[n+1];
 	for(int i=1;i<=n;i++){
 		cin>>a[i];
	 }
	 int m=0;
	 for(int i=1;i<=n;i++){
	 	m+=a[i];
	 }
	 int max=a[1];
	 for(int i=2;i<=n;i++){
	 	if(a[i]>max) max=a[i];
	 }
	 
	 if(m%2==0){
	 	int b=m/2;
	 	if(max<=b) cout<<"YES"<<endl;
	 }
	 else cout<<"NO"<<endl;
 }
 
 
 
 return 0;
 }

