#include<bits/stdc++.h>
 using namespace std ;
 int a[100],n,s;
 vector< vector<int> > res;
void Try(int i, int sum, vector<int >b){
	if(sum>s) return ;
	if(sum==s){
		res.push_back(b);
		return ;
	}
	for(int j=i;j<n;j++){
		if(sum+a[j]<=s){
			b.push_back(a[j]);
			Try(j+1,sum+a[j],b);
			b.pop_back();
		}
	}
}
 
 int main(){
 int t; cin>>t;
 while(t--){
 	cin>>n>>s;
 	for(int i=0;i<n;i++){
 		cin>>a[i];
	 }
	 sort(a,a+n);
	 vector<int>b;
	
	 Try(0,0,b);
	 if(res.size()==0) cout<<"-1"<<endl;
	 else{
	 	for(int i=0;i<res.size();i++){
	 		cout<<"[";
	 		for(int j=0;j<res[i].size()-1;j++){
	 			cout<<res[i][j]<<" ";
			 }
			 cout<<res[i][res[i].size()-1]<<"] ";
		 }
		 cout<<endl;
		 res.clear();
		 b.clear();
	 }
 }
 
 
 return 0;
 }

