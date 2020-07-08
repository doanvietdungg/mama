#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;
int main(){
	string s;
	stack<int> res;
	int x;
	while(cin >> s){
		if(s == "push"){
			cin >> x;
			res.push(x);
		}
		else if(s == "pop"){
			res.pop();
		}
		else if(s == "show"){
			if(res.size() == 0){
				cout << "empty" << endl;
				continue;
			}

				vector<int> res1;
				while(res.size() > 0){
						res1.push_back(res.top());
						res.pop();
				}
				for(int i = res1.size() - 1 ; i >= 0 ; i--){
					cout << res1[i] << " ";
					res.push(res1[i]);
				}
				cout << endl;
				
				
		}
	}
	return 0;
}
