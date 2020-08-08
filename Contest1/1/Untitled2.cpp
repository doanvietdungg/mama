#include<iostream>
#define ll long long
 using namespace std ;
 
 ll sex(ll a){
 	ll b;
 	while(a>0){
 		
 		b=a%10;
 		a=a/10;
	 }
	 return b;
 }
 int main(){
 	int b;
 	cin>>b;
 	for(int i=0;i<b;i++){
	 
 ll a;
 cin>>a;
 ll c=a%10;
 if(c==sex(a)){
 	cout<<"YES";
 }
 else cout<<"NO";
 
}
 return 0;
 }

