#include<bits/stdc++.h>
 using namespace std ;
 
 
 int main(){
 	int a[]={1,2,3,4,5,6,7,8,9};
 	int n=8;
 	
 int t; cin>>t;
 while(t--){
 	int s,d;
 	vector<int>b;
 	cin>>s>>d;
 	if(9*d<s) cout<<"-1";
 
 else{
 	int k=0;
 	while(k<=d){
 			int res;
 	for(int i=n;i>=0;i--){
 	4
 	res=s/a[i];
 
 	if(res!=0){
 		for(int j=1;j<=res;j++){
 			b.push_back(a[i]);
		 }
	 }
 	s=s%a[i];
	 }
	 
	 }
 	
	 for(int m=b.size()-1;m>=0;m--){
	 	cout<<b[m];
	 }
	 cout<<endl;
 }
 
	 
	
	 
 		
 	
 	
 }
 
 
 
 return 0;
 }

