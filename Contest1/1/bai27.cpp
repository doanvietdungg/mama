#include<bits/stdc++.h>
 using namespace std ;
 
 
 int main(){
 int t; cin  >>t;
 while(t--){
 	bool ok;
 	int n,k; cin>>n>>k;
 	int a[n+1];

 	for(int i=0;i<n;i++){
 		cin>>a[i];
	 }
	 int s=0;
	 for(int i=0;i<n;i++){
	 	s+=a[i];
	 }
	 int m=s%k;
int b=s/k;
int max=a[0];
for(int i=1;i<n;i++){
	if(a[i]>max) max=a[i];
}
if(m==0 && max<=b) cout<<"1"<<endl;
else cout<<"0"<<endl;
 }
 
 
 
 return 0;
 }

