#include<bits/stdc++.h>
using namespace std;
int b[50];
int a[50];
int n;

void display(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<" ";
}
void backTrack(int k){
	for(int i=n;i>=1;i--){
	
	if(b[i]==0){
		a[k]=i;
		b[i]=1;
		if(k==n){
			display();
		}
		else{
			backTrack(k+1);
		}
			b[i]=0;
		
	}
}
}

int main(){
	int m; cin>>m;
	for(int i=0;i<m;i++){
		cin>>n;
		backTrack(1);
		cout<<endl;
	}
	return 0;
}
