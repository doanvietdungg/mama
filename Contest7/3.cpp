#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
	int T;
	cin >> T;
	cin.ignore();
	while (T--) {
		string s;
		getline(cin , s);
		stack<char> res;
		for (int i = 0; i < s.size(); i++) {
			while (s[i] != ' ' && i < s.size()) {
				res.push(s[i++]);			
			}
			while (res.size() > 0) {
				cout << res.top();
				res.pop();
			}
			if (s[i] == ' ' )
				cout << s[i];
		}
		cout << endl;
	}
	return 0;
}
