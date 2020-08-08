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
 void Try(int i){
 	for(int j=0;j<=1;j++ ){
 		b[i]=j;
 		if(i==a.size()){
 			int d=0;
 			for(int l=1;l<=a.size();l++){
 				if(b[l]==1) d++;
			 }
			 if(d==n){
			 	
			 int d=0;
			
			 for(int q=1;q<=a.size();q++){
			 	d+=a[q]*b[q];	
			 }
			if(d==s){
			
				
		 	int m=0;
			 	for(int h=1;h<=a.size();h++){
			 		if(b[h]==1) c[m++]=a[h];
				 }
				  for(int x=0;x<m;x++){
				 	cout<<c[x]<<" ";
				 }
				 cout<<endl;
			
			 }
			
			 }
		 }
		 else Try(i+1);
	 }
 }
 void Try2(int i){
 	for(int j=0;j<=1;j++ ){
 		b[i]=j;
 		if(i==a.size()){
 			int d=0;
 			for(int l=1;l<=a.size();l++){
 				if(b[l]==1) d++;
			 }
			 if(d==n){
			 	
			 int d=0;
			
			 for(int q=1;q<=a.size();q++){
			 	d+=a[q]*b[q];	
			 }
			if(d==s){
				e++;
		
			
			 }
			
			 }
		 }
		 else Try2(i+1);
	 }
 }
 
 int main(){
 int t; cin>>t;
 while(t--){
 	cin>>n>>p>>s;
 	search();
    Try2(1);
    cout<<e<<endl;
	 Try(1);
	 e=0;




 	a.clear();
 }
 
 
 
 return 0;
 }

