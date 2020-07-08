#include<iostream>
#include<string>
#include<queue>

using namespace std;

int main(){
	long long Q;
	cin >> Q;
	queue<long long> res;
	string tmp;
	while(Q--){
		cin >> tmp;
		int tmp2;
		if(tmp == "PUSH")
		{
			long long x;
			cin >> x;
			res.push(x);	
		}
		else if(tmp == "POP" && !res.empty())
			{
				res.pop();
			}
		else if(tmp == "PRINTFRONT"){
				if(!res.empty())
					cout << res.front() << endl;
				else 
					cout << "NONE" << endl;	
		}		
	}
	return 0;
}
