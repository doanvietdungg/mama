#include<bits/stdc++.h>
 using namespace std ;
 
 
 int main(){
 int t; cin>>t;
 while(t--){
 	bool ok=true;
 	int n; cin>>n;
 	vector<int>a(n),b(n);
 	for(int i=0;i<n;i++){
 		cin>>a[i];
 		b[i]=a[i];
	 }
	 sort(b.begin(),b.end());
	 for(int i=0;i<n;i++){
	 	if(a[i]!=b[i] && a[i]!=b[n-1-i]){
	 		ok=false;
	 		 break;	
		 }
	
	 }
	 if(ok) cout<<"Yes"<<endl;
	 else cout<<"No"<<endl;
 }
 
 
 
 return 0;
 }

