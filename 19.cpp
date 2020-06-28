#include <bits/stdc++.h> 
#define ll long long
using namespace std;   
void Solution(ll nr, ll dr) {  	
    if (dr == 0 || nr == 0) 
        return;
    if (nr%dr == 0) { 
        cout << nr/dr; 
        return;
    } 
    if (nr > dr) { 
        cout << nr/dr << " + ";
		nr = nr%dr;
    }   
    
    if (dr%nr == 0) { 
        cout << "1/" << dr/nr; 
        return; 
    }   
    if (nr%dr == 0) { 
        cout << nr/dr; 
        return; 
    }   
    if (nr > dr) { 
        cout << nr/dr << " + ";
        Solution(nr%dr, dr); 
        return; 
    }   
    while(dr%nr) {
    	ll n = dr/nr + 1; 
    	cout << "1/" << n << " + ";
	    nr = nr*n-dr; 
    	dr = dr*n;    	
	}
	cout << "1/" << dr/nr; 
 }   

int main() { 
    ll nr , dr , T; 
	cin>>T;
    while(T--) {
    	cin>>nr>>dr;
    	Solution(nr, dr); 
		cout<<endl;
	}
}
