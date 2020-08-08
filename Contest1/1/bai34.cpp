#include<bits/stdc++.h>
 using namespace std ;
 bool hang[100], cot[100], nguoc[30], xuoi[30];
 int n, res;
 int a[100][100], b[10];
 void Try(int i){
 	for(int j=1;j<=n;j++){
 		if( !hang[j]  && !cot[j]  && !nguoc[i+j-1] && !xuoi[i-j+n]  ){
 			b[i]=j;
 			hang[j]=true;
 			cot[j]=true;
 			nguoc[i+j-1]=true;
 			xuoi[i-j+n]=true;
 			if(i==n) {
 				int m=0;
 				for(int l=1;l<=n;l++){
 					m+=a[l][b[l]];
 				
				 }
				 	res=max(res,m);
			 }
 			else Try(i+1);
 			hang[j]=false;
 		cot[j] = false; 
			xuoi[ i - j + n] = false; 
			nguoc[ i + j - 1] = false;

		 }
	 }
 }
 int main(){
 int t; cin>>t;
 while(t--){
 	for(int i=1;i<=8;i++){
 		for(int j=1;j<=8;j++){
 			cin>>a[i][j];
		 }
	 }
//	 for(int i=1;i<=8;i++){
//	 	hang[i]=cot[i]=false;
//	 }
//	 for(int i=1;i<30;i++){
//	 	nguoc[i]=xuoi[i]=false
//	 }
	 n=8;
	 Try(1);
	 cout<<res<<endl;
	 res=0;
 }
 
 
 
 return 0;
 }

