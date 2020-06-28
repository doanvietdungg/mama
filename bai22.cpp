#include<bits/stdc++.h>
 using namespace std ;
  	
 int search(int a[], int l, int r,int k){

 	if(l>r) return false;
 	int mid=(l+r)/2;
 	if(a[mid]==k) {
 		
 		return mid;
	 }
 	else if(a[mid]>k) {
 		return search(a,l,mid-1,k);
 		
	 }
	 else{
	 	return search(a,mid+1,r,k);
	 }
 }
 
 int main(){
 int t; cin>>t;
 while(t--){
 	
 	int n,k;
 	cin>>n>>k;
 	int a[n];
 	for(int i=1;i<=n;i++) cin>>a[i];
 	
 	if(search(a,1,n,k)){
 			cout<<search(a,1,n,k)<<endl;
	 }
	 else cout<<"NO"<<endl;
	 
 
 	
 }
 
 
 
 
 
 return 0;
 }

