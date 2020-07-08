#include<iostream>
#include<stack>
#include<string>
using namespace std;
string s1,s2;
string s3; 
string Solve(string s){
	stack<int> stk;
	for(int i = 0 ; i < s1.size() ; i++){
		if(s[i] == '(')
			stk.push(i);
		else if(s[i] == ')'){
			if(stk.size() >0){
				int top = stk.top();
				stk.pop();
				if(s[top-1] == '+') continue;
				else if(s[top-1] == '-'){
					for(int j = top ; j < i ; j++){
						if(s[j] == '+')
							s[j] = '-';
						else if(s[j] == '-')
							s[j] = '+';	
					}
				}
			}			
		}	
	}
	s3 = "";
		for(int i = 0 ; i < s.size() ; i++){
			if(s[i] != '(' && s[i] != ')')
				s3 += s[i];
		}
	return s3;	
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> s1 >> s2;
		string s3 = Solve(s1);
		string s4 = Solve(s2);
		if(s3 == s4)
			cout << "YES" << endl;
		else cout << "NO" << endl;	
		
	}
}
