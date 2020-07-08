#include<iostream>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int n , s , m;
		cin >> n >> s >> m;
		int max = n*(s - s/7);
		if(max < (s*m))
			cout << -1 << endl;
		else{
			if((s*m)%n == 0)
				cout << (s*m)/n << endl;
			else 
				cout <<((s*m)/n) + 1 << endl;	
			
		}	
	}
	
	return 0;
}
