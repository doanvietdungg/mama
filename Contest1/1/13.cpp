#include<bits/stdc++.h>
using namespace std;
int n,k,a[100];
vector<string>b;
string s;
void Try(int i){
for(int j=0;j<=1;j++){
	a[i]=j;
	if(i==n-k){
		for(int l=1;l<=n-k;l++){
			if(l==1 && a[l]==1){
				string tmp;
				tmp+=s;
				for(int p=1;p<=n-k;p++){
					if(a[p]) tmt+="B";
					else tmp+="A";
				}
					 b.push_back(tmp);
			}
			if(l=n-k && a[l]==1){
				string tmp;
				for(int p=1;p<=n-k;p++){
					if(a[p]) tmp+="B";
					else tmp+="A";
				}
				tmp+=s;
					 b.push_back(tmp);
			}
			 if(a[l] && a[l-1] && l>1){
				 	string tmp="";
				 	for(int p=1;p<=n-k;p++)	{
				 		if(p==l) tmp+=s;
				 		if(a[p]) tmp+="B";
				 		else tmp+="A";
					 }
					 b.push_back(tmp);			 
					 
					 }
		}
	}
}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=k;i++){
			s+="A";
		}
		Try(1);
 sort(b.begin(),b.end());
 cout<<b.size()<<"\n";
 for(int i=0;i<b.size();i++){
 	cout<<b[i]<<endl; 
 }
 

	}
}