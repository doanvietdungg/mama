#include<bits/stdc++.h>
 using namespace std ;
  struct job {
  	int s;
  	int f;
  	
  };
 bool check(job s1, job s2){
 	return (s1.f<s2.f);
 }
 int main(){
 int  t; cin>>t;
 while(t--){
 	int n; cin>>n;
 	job a[n+1];
 	for(int i=0;i<n;i++){
 		cin>>a[i].s;
	 }
	 
	 	for(int i=0;i<n;i++){
 		cin>>a[i].f;
	 }
	 sort(a,a+n,check);
	 for(int i=0;i<n;i++){
	 	cout<<a[i].s<<" "<<a[i].f<<endl;
	 }
//	 int d=1;
//	 int j=0;
//	 for(int i=1;i<n;i++){
//	 	if(a[i].s>=a[j].f){
//	 		d++;
//	 		j=i;
//		 }
//	 }
//	 cout<<d<<endl;
 }
 
 
 
 return 0;
 }

