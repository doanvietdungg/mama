#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
	long int Q;
	cin >> Q;
	string s ;
	long int x;
	stack<long int> res;
	while(Q--){
		cin >> s;
		if( s == "PUSH"){
			cin >> x;
			res.push(x);
		}
		else if( s == "POP" && res.size() > 0){
			res.pop();
		}
		else if(s == "PRINT"){
			if(res.size() == 0)
				cout << "NONE" ;
			else
				cout << res.top();
			cout << endl;		
		}
	}	
	return 0;
} 
