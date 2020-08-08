#include<bits/stdc++.h>
 using namespace std ;


 int main(){
int a[]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int n=10;
int t;
cin>>t;
while(t--){
	long long k, res=0;
	cin>>k;
	for(int i=n-1;i>=0;i--){
		res+=k/a[i];
		k=k%a[i];
	}
	cout<<res<<endl;
}
 
 
 
 
 
 return 0;
 }

