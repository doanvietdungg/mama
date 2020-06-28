#include<bits/stdc++.h>
 using namespace std ;
void solve(int s, int d){
if(s==0){
	if(d==1) cout<<"0";
	else cout<<"-1";
}
if(d*9<s) cout<<"-1";


int a[d]; s=s-1;
for(int i=d-1;i>0;i--){
	if(s>9){
		a[i]=9;
		s=s-9;
	}
	else{
		a[i]=s;
		s=0;
	}

}
	a[0]=s+1;
	for(int i=0;i<d;i++){
		cout<<a[i];
	}	
	
}
 
 int main(){
 int t; cin>>t;
 while(t--){
 	int s,d;
 	cin>>s>>d;
 	solve(s,d);
 	cout<<endl;
 }
 
 
 
 return 0;
 }

