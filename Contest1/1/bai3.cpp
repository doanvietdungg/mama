#include<bits/stdc++.h>
 using namespace std ;
 
 
 int main(){
 int n;cin>>n;
 for(int i=0;i<n;i++){
 	int m; cin>>m;
 	int a[m+1];
 	for(int i=1;i<=m;i++){
 		cin>>a[i];
	 }
	 int j=m-1;
	 while(j>0 && a[j]>a[j+1]) j--;
	 if(j>0){
	 	int k=m;
	 	while(a[j]>a[k]) k--;
	 	
	swap(a[k], a[j]);
	 
			int r = j +1, s = m;
			while ( m <s ) { 
			a[j] = a[r];
			r ++; s --;
		}
		
		 for(int i=1;i<=m;i++){
		 	cout<<a[i]<<" ";
		 }
	}

	 
	 else{
	 	for(int i=1;i<=m;i++){
	 		cout<<i<<" ";
		 }
	 }
	 cout<<endl;
 }
 
 
 
 return 0;
 }

