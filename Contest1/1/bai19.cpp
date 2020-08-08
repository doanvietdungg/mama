#include<bits/stdc++.h>
 using namespace std ;
 int n,a[20][20];
 void dequy(int i){
 	if(i==1) return;
 	for(int j=1; j<i;j++){
 		a[i-1][j]=a[i][j]+a[i][j+1];
 		
	 } 
	 dequy(i-1);
	 }
 void in(){
 	int i,j;
 	for(int i=1;i<=n;i++){
 		cout<<"[";
 		for(int j=1;j<i;j++){
 			cout<<a[i][j];
		 }
		 cout<<"]";
	 }
 }
 int main(){
 cin>>n;
 for(int i=1;i<=n;i++){
 	cin>>a[i][n];
 }
 dequy(n);
 in();
 
 
 return 0;
 }

