#include<bits/stdc++.h>
 using namespace std ;
 const long long mod=1e9+7;
 long long Pow(long long a, long long n){
 	if(n==0) return 1;
 
     
	
        long long temp = Pow(a, n/2);
    
        if(n % 2 == 0)
            return (temp * temp)%mod;
        else
            return (temp * temp)%mod * a%mod;
    
 }
 
 int main(){
 int  t; cin>>t;
 while(t--){
 	long long a,n;
 	cin>>a>>n;
 	cout<<Pow(a,n)<<endl;
 }
 
 
 
 return 0;
 }

