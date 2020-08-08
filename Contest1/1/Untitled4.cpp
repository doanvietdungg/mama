#include<bits/stdc++.h>
 using namespace std ;
 
 
 int main(){
 long long a,b;
 
 cin>>b;
 for(int i=0;i<b;i++){
 	cin>>a;
 	
 	for(int  i=2;i<=sqrt(a);i++){
 		int c=0;
 		while(a%i==0){
 			c++;
 		a/=i;	
		 }
		 if(c==1) cout<<i;
		 if(c>1)cout<<i<<c;
	 }
 }
 
 
 
 return 0;
 }

