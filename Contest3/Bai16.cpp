#include<iostream>
#include<stack>

using namespace std;

int main(){
	int T;
	cin >> T ;
	while(T--){
		int s , d;
		cin >> s >> d;
		stack<int> res;
		while(s > 0)
		{
			d--;
			if(s > 9)
			{
				res.push(9);
				s -= 9;	
			}
			else
			{
				res.push(s);
				break;
			}			
		}
		if(d < 0)	cout << -1 << endl;
		else
		{
			if(d > 0)
			{
				int tmp  = res.top(); res.pop();
				res.push(tmp-1);
				while(d > 1)
				{
					res.push(0);
					d--;
				}
				res.push(1);
			}
			while(res.size() > 0)
			{
				cout << res.top() ;
				res.pop();
			}
			
		}
		cout << endl;
		
	}
	
	return 0;
}
