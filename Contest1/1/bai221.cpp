#include<bits/stdc++.h>
 using namespace std ;
 int a[100][100],n,kq;
 string s;
 void in(int m){
 	for(int i=0;i<n;i++){
 		cout<<s[m];
	 }
	 cout<<" ";
	  }
 void dequy(int i, int j, int m){
 	if(i==n && j==n && a[i][j]==1){
 		kq=1; in(m); return;
	 }
	 if(a[i+1][j]==1){
	 	s[m]='D';
	 	dequy(i+1,j,m+1);
	 }
	 if(a[i][j+1]==1){
	 	s[m]='R';
	 	dequy(i,j+1,m+1);
	 }
 }
 
 
 int main(){
 int t; cin>>t;
 while(t--){
 	cin>>n;
 	for(int i=1;i<=n;i++){
 		for(int j=1;j<=n;j++){
 			cin>>a[i][j];
		 }
	 }
	 if(a[1][1]==0){
	 	cout<<"-1"; break;
	 }
	 dequy(1,1,0);
 }
 
 
 
 return 0;
 }

