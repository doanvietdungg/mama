#include<bits/stdc++.h>
 using namespace std ;
 
 
 int main(){
 int  t; cin>>t;
 while(t--){
 	long long n;
 	cin>>n;
 	long long a[n],b[n-1];
 	for(long long i=1;i<=n;i++){
 		cin>>a[i];
	 }
	
	 for(int i=1;i<=n-1;i++){
	 	cin>>b[i];
	 	
	 }
	 int c;
	 for(int i=1;i<=n-1;i++){
	 	if(a[i]!=b[i]){
	 		c=i;
	 		break;
		 }
	 }
	 if(c) cout<<c<<endl;
	 else cout<<n<<endl;
	 
 }
 
 
 
 return 0;
 }

