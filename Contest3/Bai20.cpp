#include<iostream>
#include<stack>
#include<string>
using namespace std;

long long res , xoa ;
string s;
stack<char> tmp;
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> s;
		res = 0;
		xoa = 0;
		for(long int i = 0 ; i < s.size() ; i++)
		{
			if(tmp.size() == 0)
				tmp.push(s[i]);
			else if(tmp.top() == '[' && s[i] == ']')
			{
				tmp.pop();
				xoa += 2;
			}
			else if(tmp.top() == ']' && s[i] == '[')
			{
				res += tmp.size() + xoa;
				tmp.pop();	
			}
			else if(s[i] == '[')
				{
					tmp.push(s[i]);
				}
			else if(tmp.top() == ']' && s[i] == ']')
				{
					tmp.push(s[i]);
				}
			if(tmp.size() == 0) xoa = 0;			
		}
		cout << res << endl;
	}
	
	
	return 0;
}
