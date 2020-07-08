#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		string s;
		cin >> s;
		stack<char> res;
		bool ok = true;
		for(int i = 0 ; i < s.size() ; i++){
			if(s[i] == '[' || s[i] == '{' || s[i] == '(')
				res.push(s[i]);
			else if(s[i] == ')'){
				if(res.size() == 0){
					ok = false;
					break;
				}
				if(res.top() == '(')	res.pop();
			}
			else if(s[i] == ']'){
				if(res.size() == 0){
					ok = false;
					break;
				}
				if(res.top() == '[')	res.pop();
			}
			else if(s[i] == '}'){
				if(res.size() == 0){
					ok = false;
					break;
				}
				if(res.top() == '{')	res.pop();
			}		
		}
		if(res.size() > 0) ok = false;
		if(ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
