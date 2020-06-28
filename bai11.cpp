#include<bits/stdc++.h>
 using namespace std ;
 
 
 int main(){
 int t ; cin>>t;
 while(t--){
 	int n; cin>>n;
 	int  a[n+1];
 	
 	for(int i=0;i<n;i++) cin>>a[i];
 	vector<int>b;
 	for(int i=0;i<n-1;i++)
	 {
	 	for(int j=i+1;j<n;j++){
	 		b.push_back(a[i]+a[j]);
		 }
	 }
//	 for(int i=0;i<b.size();i++){
//	 	cout<<b[i]<<" ";
//	 }
//	 cout<<endl;
	 int c=b[0];
	for(int i=1;i<b.size();i++){
		if(abs(b[i])<abs(c)) c=b[i];
	}
	cout<<c<<endl;
	b.clear();
 }
 
 
 
 return 0;
 }

