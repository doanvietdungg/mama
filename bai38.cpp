#include<bits/stdc++.h>
 using namespace std ;
 
 
 int main(){
 int  t; cin>>t;
 while(t--){
 	int n,m,k;
 	cin>>n>>m>>k;
 	vector<int>a;
 	vector<int>b;
 	for(int i=0;i<n;i++){
 		cin>>a[i];
 		
	 }
	 for(int i=0;i<m;i++){
	 	cin>>b[i];
	 	a.push_back(b[i]);
	 }
	 sort(a.begin(),a.end());
	 cout<<a[k-1]<<endl;
 }
 
 
 
 return 0;
 }

