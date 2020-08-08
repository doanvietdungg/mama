#include<bits/stdc++.h>
 using namespace std ;
 int d=0;
 void topright( int [][50], int , int ,int  ,int);
 void botomleft( int [][50], int , int ,int ,int);
 void topright(int a[][50] , int x1, int y1, int x2, int y2){
 	for(int i=x1;i<=x2;i++){
 		a[y1][i]=d++;
	 }
	 for(int j=y1+1;j<=y2;j++){
	 	a[j][x2]=d++;
	 	
	 }
	 if(x2-x1>0 && y2-y1>0){
	 	x2--;
	 	y1++;
	 	botomleft(a,x1,y1,x2,y2);
	 } 
 }
 void botomleft(int a[][50], int x1, int y1, int x2,int y2){
 	for(int i=x2;i>=x1;i--){
 		a[y2][i]=d++;
 		
	 }
	 for(int j=y2-1; j>=y1;j--){
	 	a[j][x1]=d++;
	 	
	 }
	  if(x2-x1>0 && y2-y1>0){
	 	x1++;
	 	y2--;
	 	topright(a,x1,y1,x2,y2);
	 } 
	 
 }
 void in( int a[][50], int n,int m){
 	for(int i=1;i<=n;i++){
 		for(int j=1;j<=m;j++){
 			cout<<a[i][j]<<"  ";	 }
 			 cout<<endl;
 			 cout<<endl;
 }

}
 
 int main(){
 int n,m;

 int a[50][50];
 cin>>n>>m;
 topright(a,0,0,n-1,m-1);

 in(a,n,m);
 
 
 
 return 0;
 }

