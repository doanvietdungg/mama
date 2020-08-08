#include<bits/stdc++.h>
 using namespace std ;
 
 
 int main(){
 int t; cin>>t;
 while(t--){
 	int n,k; cin>>n>>k;
 	int a[k+1];
 	 vector<int>b;
 	  int d=0;
 	for(int i=1;i<=k;i++){
 		cin>>a[i];
 		b.push_back(a[i]);
	 }
	 int j=k;
	 while(j>0 && a[j]==n-k+j) j--;
	 if(j>0){
	 	a[j]++;
	 	for(int c=j+1;c<=k;c++){
	 		a[c]=a[j]-j+c;
		 }
		 for(int i=1;i<=k;i++){
		 	for(int e=0;e<b.size();e++){
		 		if(a[i]==b[e]) d++;
			 }
		 }
		 cout<<k-d;

	
}
else cout<<k;




	
		cout<<endl;
	
	
	 }
	 
	
 
 
 
 
 return 0;
 }

