#include<bits/stdc++.h>
 using namespace std ;
 
 
 int main(){
 int t; cin>>t;
 while(t--){
 	int n; cin>>n;
 	int a;
 	int d[10]={0};
 	for(int i=0;i<n;i++){
 		cin>>a;
 		while(a){
 			d[a%10]=1;
 			a=a/10;
		 }
	 }
	 for(int i=0;i<10;i++){
	 	if(d[i]) cout<<i<<" ";
	 }
	 cout<<endl;
 }
 
 
 
 return 0;
 }

