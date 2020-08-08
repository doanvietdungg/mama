#include<bits/stdc++.h>
 using namespace std ;
 int a[100],b[100],c[20], n,k;
 
 
 
 
 void back_track(int i){
 	for(int j=0;j<=1;j++){
 		a[i]=j;
 		if(i==n){
 			int d=0;
 			for(int m=1;m<=n;m++){
 			d+=a[m]*b[m];
			 }
			 if(d==k) {
			 	
			 	int m=0;
			 	for(int h=1;h<=n;h++){
			 			if(a[h]) c[m++]=b[h];
				 }
				
				 cout<<"[";
				 for(int x=0;x<m-1;x++){
				 	cout<<c[x]<<" ";
				 }
				 cout<<c[m-1]<<"]"<<" ";
			// cout<<endl;
		
			 }
			
 			
		 }
		 else(back_track(i+1));
	 }
 }
 
 
 int main(){
	 int t; cin>>t;
	 while(t--){
cin>>n>>k;
for(int i=1;i<=n;i++){
	cin>>b[i];
}
sort(b+1,b +n+1);
 back_track(1);
 cout<<endl;
 
	 }
 
 
 
 return 0;
 }

