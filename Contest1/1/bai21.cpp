#include<bits/stdc++.h>
 using namespace std ;
 int a[100];
 string s;
 bool check[100];
 void Try(int i){
 	for(int j=0;j<s.size();j++){
 		if(!check[j]){
 				a[i]=j;
 		check[j]=true;
 		if(i==s.size()){
 			for(int l=1;l<=s.size();l++){
 				cout<<s[a[l]];
			 }
			 cout<<" ";
		 }
		 else	
		 Try(i+1);
		  check[j]=false;
		 }
 		 
		 }
 }
 
 int main(){
 int t; cin>>t;
 while(t--)
 {
 	cin>>s;
 		sort(s.begin(),s.end());
 		Try(1);
 		cout<<"\n";
 		
 }
 
 
 return 0;
 }

