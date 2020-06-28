#include<bits/stdc++.h>
 using namespace std ;
 struct job{
 	int id;
 	int t;
 	int f;
 };
 bool check(job s1, job s2){
 	return (s1.f>s2.f);
 }
 int main(){
 int t; cin>>t;
 while(t--){
 	int n;cin>>n;
 	job a[n+1];
 	for(int i=0;i<n;i++){
 	cin>>a[i].id>>a[i].t>>a[i].f;
	 }
	
	 sort(a,a+n,check);
	int d=0, res=0;
	int f[1001]={0};
	for(int i=0;i<n;i++){
		while(f[a[i].t]==1 && a[i].t>0) a[i].t-=1;
		if(f[a[i].t]==0&& a[i].t>0){
			f[a[i].t]=1;
			res+=a[i].f;
			d++;
		}
	}
	cout<<d<<" "<<res<<endl;
 }
 
 
 
 return 0;
 }

