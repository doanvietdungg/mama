#include<bits/stdc++.h>
 using namespace std ;
 int a[100][100], n;
bool ok[100][100];
 vector<string>b;
void Try(int i, int j, string s){
	if(a[1][1]==0 || a[n][n]==0) return ;
	if(i==n && j==n && a[i][j]==1){
		b.push_back(s);
		return ;
	}
	if(a[i+1][j]==1 && i<n && ok[i+1][j]== false){
		ok[i][j]=true;
		Try(i+1,j,s+"D");
	ok[i][j]=false;
	}
		if(a[i][j+1] && j<n && ok[i][j+1]== false){
			ok[i][j]=true;
			Try(i,j+1,s+"R");
			ok[i][j]=false;
		}
		if(a[i-1][j]==1 && i>1 && ok[i-1][j]==false){
		ok[i][j]=true;
			Try(i-1,j,s+"U");
		ok[i][j]=false;
		}
		if(a[i][j-1]==1 && j>1 && ok[i][j-1]==false){
		ok[i][j]=true;
			Try(i,j-1,s+"L");
		ok[i][j]=false;
		}
	
}
 
 
 int main(){
 int t; cin>>t;
 while(t--){
 	cin>>n;
 	string s;
 	for(int i=1;i<=n;i++){
 		for(int j=1;j<=n;j++){
 			cin>>a[i][j];
 			ok[i][j]=false;
		 }
	 }
	 Try(1,1,s);
	 if(b.size()==0) cout<<"-1"<<endl;
	 else{
	 	sort(b.begin(),b.end());
	 	 for(int i=0;i<b.size();i++){
	 	cout<<b[i]<<" ";
		 	 
			  }
			  cout<<endl;
	 b.clear();
	 }
	
 }
 
 
 
 return 0;
 }

