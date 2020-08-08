#include<bits/stdc++.h>
 using namespace std ;
 int a[100][100],b[100],m,n;
int d=0;

 void dequy(int i, int j ){
 
 
 
 	if(i==n && j==m){
 	
d++;
 		
	 }
	 if(i<n ) {
	 	dequy(i+1,j);
	 
	 }
	 if(j<m){
	 	dequy(i,j+1);
	 }


 }
 
 int main(){
 int t; cin>>t;

 while(t--){
 	cin>>n>>m;
 
 	for(int i=1;i<=n;i++){
 		for(int j=1;j<=m;j++){
 			cin>>a[i][j];
		 }
	 }
	 
dequy(1,1);
cout<<d;


	 cout<<endl;
	 d=0;
	 
 }
 
 
 
 return 0;
 }

