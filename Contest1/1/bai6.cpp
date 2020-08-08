#include<bits/stdc++.h>
 using namespace std ;
void start(int a[],int n) {
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
}
bool check(int a[], int n){
	for(int i=1;i<n;i++){
		if(a[i]<a[i+1]) return false;
	}
	return true;
}
void display( int a[], int n){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<" ";
}
 void sinh(int a[], int n){
 	int j=n-1;
 	while(j>0 && a[j]>a[j+1]) j--;
 	if(j>0){
 		int i=n;
 		while(a[j]>a[i]) i--;
 		swap(a[i],a[j]);
 		int l=j+1 ,r=n;
 		while(r>l){
 			
 				swap(a[l],a[r]);
				l++;
				r--;
		 }
	 }
 }
 int main(){
 int m ; cin>>m;
for(int i=0;i<m;i++){
	int n; cin>>n;
	int a[n+1];
	start(a,n);
	while(!check(a,n)){
		display(a,n);
		sinh(a,n);
	}
	display(a,n);
	cout<<endl;
}
 
 
 
 return 0;
 }

