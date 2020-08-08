#include<bits/stdc++.h>
 using namespace std ;
 
 void chenmang(  vector<int>a, vector<int>b, int c){
 	for(int i=0;i<b.size();i++){
 		if(c==1 || c==0){
 				a.insert(a.begin()+c+i,b[i]);
		 }
 	else{
 			a.insert(a.begin()+c+i,b[i]);
	 }
	 }
	 for(int i=0;i<a.size();i++){
	 	cout<<a[i]<<" ";
	 }
 }
 
 int main(){
 int c,n,m,h;
 cin>>h;
 for(int i=0;i<h;i++){
 
 cin>>n>>m>>c;
 vector<int>a(n);
  vector<int>b(m);
  
 
  for(int i=0;i<a.size();i++){
  	cin>>a[i];
  	
  }
  for(int i=0;i<b.size();i++){
  	cin>>b[i];
  }
  chenmang(a,b,c);
}
 
 return 0;
 }

