#include<bits/stdc++.h>
 using namespace std ;
 
 
 int main(){
 int t; cin>>t;
 while(t--){
int k;
 	string s;
 	cin>>k;
 	cin>>s;
 	for(int i=0;i<s.size();i++)
{
	int vt=s.size()-1;
	int max=s[s.size()-1];
	for(int j=s.size()-1;j>i && k>0;j--){
		if(max<s[j]){
			max=s[j];
			vt=j;
		}
	}
	if(max>s[i] && k>0){
		swap(s[vt],s[i]);
		k--;
	}
 } 
 cout<<s<<endl;
 
 	
 }

 
 
 return 0;
 }

