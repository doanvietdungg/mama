#include <bits/stdc++.h>  
using namespace std; 

int Equal(string &s1, string &s2) { 
    int len1 = s1.size(); 
    int len2 = s2.size();
    if (len1 < len2) { 
        for (int i = 0 ; i < len2 - len1 ; i++) 
            s1 = '0' + s1; 
        return len2; 
    } 
    else if (len1 > len2)  { 
        for (int i = 0 ; i < len1 - len2 ; i++) 
            s2 = '0' + s2; 
    } 
    return len1; 
}   
 
string addBitStrings( string s1, string s2 ) { 
    string result;  
    int length = Equal(s1, s2); 
    int carry = 0;  
    for (int i = length-1 ; i >= 0 ; i--) { 
        int bits1 = s1.at(i) - '0'; 
        int bits2 = s2.at(i) - '0';
        int sum = (bits1 + bits2 + carry) % 2 + '0';
        carry = (bits1 + bits2 + carry) / 2;
        result = (char)sum + result; 
    }   
    if (carry)  result = '1' + result;   
    return result; 
} 
  
int multiplyiSingleBit(string a, string b) {  
	return (a[0] - '0')*(b[0] - '0');  
}  

long long multiply(string X, string Y) { 
    int n = Equal(X, Y);       
    if (n == 0) 
		return 0; 
    if (n == 1) 
		return multiplyiSingleBit(X, Y);   
    int fh = n / 2;   
    int sh = (n - fh); 
    
    string Xl = X.substr(0, fh);
    string Xr = X.substr(fh, sh); 
    
    string Yl = Y.substr(0, fh); 
    string Yr = Y.substr(fh, sh); 
    long long P1 = multiply(Xl, Yl); 
    long long P2 = multiply(Xr, Yr); 
    long long P3 = multiply(addBitStrings(Xl, Xr), addBitStrings(Yl, Yr)); 

    return P1*(1<<(2*sh)) + (P3 - P1 - P2)*(1<<sh) + P2; 
}   

int main() { 
	int T; 
	cin>>T;
	while(T--) {
		string X, Y; 
		cin>>X>>Y;
		cout<<multiply(X,Y)<<endl;
	}
}
