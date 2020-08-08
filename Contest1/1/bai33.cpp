#include<bits/stdc++.h>
 using namespace std ;
 bool hang[100], cot[100], nguoc[100], xuoi[100];
 int n, res;
 void Try(int i){
 	for(int j=1;j<=n;j++){
 		if( !hang[j]  && !cot[j]  && !nguoc[i+j-1] && !xuoi[i-j+n]  ){
 			hang[j]=true;
 			cot[j]=true;
 			nguoc[i+j-1]=true;
 			xuoi[i-j+n]=true;
 			if(i==n) res++;
 			else Try(i+1);
 			hang[j]=false;
 		cot[j] = false; 
			xuoi[ i - j + n] = false; 
			nguoc[ i + j - 1] = false;

		 }
	 }
 }
 
 int main(){
 cin>>n;
 Try(1);
 cout<<res<<endl;
 
 
 
 return 0;
 }

