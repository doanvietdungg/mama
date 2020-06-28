#include<bits/stdc++.h>
 using namespace std ;
 
 
 int main(){
 
 	int k;
 	string a;
 	string b;
 	string res="";
 	cin>>k>>a>>b;
 	while(a.size()<b.size()) a="0"+a;
 	while(a.size()>b.size()) b="0"+b;
int length=a.size();
    int carry = 0;  
    for (int i = length-1 ; i >= 0 ; i--) { 
        int val1 = a[i] - '0';
        int val2 = b[i] - '0';
        int sum = (val1 + val2 + carry) % k + '0';
        carry = (val1 + val2 + carry) / k;
        res = (char)sum + res; 
    }   
    if (carry)  {
    	char x = ('0' + carry);
    	res = x + res; 
	}  
	
 	cout<<res<<endl;
 	
 
 
 
 return 0;
 }

