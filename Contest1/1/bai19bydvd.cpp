#include<bits/stdc++.h>
 using namespace std ;
 void dequy(int i,int n, int a[][20]){
 	if(i==n) return ;
 	for(int j=1;j<=n-i;j++)
 	{
 		a[i+1][j]=a[i][j]+a[i][j+1];
 		
	 }
	 dequy(i+1,n,a);
 }
 
 int main(){
 	int t; cin>>t;
 	while(t--){
 		
 		 int n; cin>>n;
 int a[n+1][20];
 for(int i=1;i<=n;i++){
 	cin>>a[1][i];
 } 
 dequy(1,n,a);
 for(int i=n;i>=1;i--){
 	cout<<"[";
 	for(int j=1;j<=n-i;j++){
 
 	cout<<a[i][j]<<" ";
 		
	 }
	 cout<<a[i][n-i+1]<<"]";
	 cout<<" ";
 }
 cout<<endl;

 
	 }

 
 return 0;
 }

