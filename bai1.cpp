#include<bits/stdc++.h>
 using namespace std ;
 
 int f[1005][1005];
 int tinh(string s1, string s2){
 		int a=s1.size();
 		int b=s2.size();
		 for(int i=1;i<=a;i++) f[i][0]=0;
		 for(int i=1;i<=b;i++) f[0][i]=0;
		 for(int i=1;i<=a;i++){
		 	for(int j=1;j<=b;j++){
		 		if(s1[i-1]==s2[j-1]){
		 			f[i][j]=f[i-1][j-1]+1;
				 }
				 else f[i][j]=max(f[i-1][j],f[i][j-1]);
			 }
			 
		 }
		 return f[a][b];
		  }
 
 int main(){
 int t; cin>>t; while(t--){
 	string s1, s2;
 	cin>>s1>>s2;
 	cout<<tinh(s1,s2)<<endl;
 }
 
 
 
 return 0;
 }

