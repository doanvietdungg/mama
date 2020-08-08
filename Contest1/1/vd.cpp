#include<bits/stdc++.h>
 using namespace std ;
 int n,p,s,e=0;
 
 int b[100], c[100];
 vector<int>a;
 int snt(int i){
 if(i<2) return 0;
 else{
 	for(int j=2;j<=sqrt(i);j++){
 		if(i%j==0) return 0;
	 }
 }
 return 1;
 }
 void search(){
 	for(int i=p;i<s;i++){
 		if(snt(i)){
 			a.push_back(i);
		 }
	 }
 }

 
 int main(){
 int t; cin>>t;
 while(t--){
 	cin>>n>>p>>s;
 	search();
   for(int i=0;i<a.size();i++){
   	cout<<a[i]<<" ";
   }
   cout<<endl;




 	a.clear();
 }
 
 
 
 return 0;
 }

