#include<bits/stdc++.h>

 using namespace std ;
 
 
 int main(){
 int t; cin>>t;
 while(t--){
 	int d[1003]={0};
 	int n; cin>>n;
 	long long a[n+1];
 	long long l,r;
 	for(int i=0;i<n;i++) {
 		cin>>a[i];
 		if(i==0) l=r=a[i];
 		l=min(a[i],l);
 		r=max(r,a[i]);
 		d[a[i]]=1;
	 }
 
 int res=0;
 for(int i=l;i<=r;i++){
 	if(d[i]==0) res++;
 }
 cout<<res<<endl;
 
 }
 
 
 
 return 0;
 }

