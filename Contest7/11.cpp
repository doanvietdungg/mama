#include<iostream>
#include<stack>
#include<string>
using namespace std;
int degree(char c){
	if(c == '^') return 5;
	if(c == '*' || c == '/') return 4;
	if(c == '+' || c== '-') return 3;
	else return 2;
}
void Solve(){
	string s , res;
	res = "";
	cin >> s;
	stack<char> stk;
	for(int i = 0 ; i < s.size() ; i++){
		if(s[i] >= 'A' && s[i] <= 'Z') res += s[i];
		else if(s[i] >= 'a' && s[i] <= 'z') res += s[i];
		else if(s[i] == '(') stk.push(s[i]);
		else if(s[i] == ')'){
			while(stk.size() && stk.top() != '('){
				res += stk.top();
				stk.pop();
			}
			stk.pop();
		}
		else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' ){
			while(stk.size() && degree(stk.top() ) >= degree(s[i])){
				res += stk.top();
				stk.pop();
			}
			stk.push(s[i]);
		}
	}
	while(stk.size()){
		if(stk.top() != '(') res += stk.top();
		stk.pop();
	}
	cout << res << endl;	
} 
int main(){
	int T;
	cin >> T;
	while(T--){
		Solve();
	}	
	return 0;
}

//cin >> s;
//		res = "";
//		stack<char> tmp;
//		for(int i = 0 ; i < s.size() ; i++){
//			if(s[i] == '(')
//				tmp.push(s[i]);
//			else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
//				char tmp1 = tmp.top();
//				if(degree(s[i]) >= degree(tmp1))
//					tmp.push(s[i]);
//				else if(degree(s[i]) < degree(tmp1)){
//					tmp1 = tmp.top();
//					tmp.pop();
//					res += tmp1;
//					tmp.push(s[i]);
//				}
//				else if(tmp.size() == 0)	tmp.push(s[i]);	
//			}
//			else if(s[i] == ')'){
//				char tmp1 = tmp.top();
//				tmp.pop();
//				while(tmp1 != '('){
//					res += tmp1;
//					tmp1 = tmp.top();
//					tmp.pop();
//				}
//			}
//			else res += s[i];	
//		}
//		while(tmp.size()){
//			if(tmp.top() != '(' )
//				res += tmp.top();
//			tmp.pop();
//		}
//		for(int i = 0 ; i < res.size() ; i++){
//			cout << res[i] ;
//		}
//		cout << endl;

