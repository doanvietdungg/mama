#include<bits/stdc++.h>
 using namespace std ;
 int res,n,k,s;
 int a[10];
 void Try(int i){
 	for(int j=a[i-1]+1;j<=n-k+i;j++ ){
 		a[i]=j;
		 if(i==k){
		 	int m=0;
		 	for(int l=1;l<=k;l++){
		 		m+=a[l];
			 }
			 
			 if(m==s) res++;
		 }
		 else Try(i+1);
		 	 }
 }
 
 int main(){
 while(1){
 	cin>>n>>k>>s;
 	if(n==0 && s==0 && k==0) break;
 	Try(1);
 	cout<<res<<endl;
 	res=0;
 }
 
 
 
 return 0;
 }

