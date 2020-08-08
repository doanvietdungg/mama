#include<bits/stdc++.h>
#define ll long long

 using namespace std ;
 ll count(ll a[], ll n){
 
 	ll b=0;
 	
 			for(int i=0;i<n/2;i++){
 		b+=a[i]-a[n-i-1];
	 }
	 
	 return b;
}

 
 
 int main(){
 ll a[1000],n;
 int m;
 cin>>m;
 for(int i=0;i<m;i++){
 	cin>>n;
 	for(int i=0;i<n;i++)
 	{
 		cin>>a[i];
	 }
	 if(count(a,n)==0) cout<<"YES";
	 else cout<<"NO";
	 cout<<endl;
 }
 
 
 
 return 0;
 }

