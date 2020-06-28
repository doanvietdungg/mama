#include<bits/stdc++.h>
 using namespace std ;
 
 
 int main(){
 int t; cin>>t;
while(t--){
	int n,k; cin>>n>>k;
	int a[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
int j=0;
int sum1=0, sum2=0;
while(j<n){
	if(j<k) sum1+=a[j];
	else sum2+=a[j];
	j++;
}
 int b=abs(sum1-sum2);
 j=0;
 sum1=0; sum2=0;
while(j<n){
	if(j<n-k) sum1+=a[j];
	else sum2+=a[j];
	j++;
}
 int c=abs(sum1-sum2);
 int res=max(b,c);
 cout<<res<<endl;
 

 }
  return 0;
}

