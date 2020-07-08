#include<iostream>
#include<deque>
#include<string>

using namespace std;
int main(){
	long long Q;
	cin >> Q;
	string tmp;
	deque<long long> res;
	long long tmp2;
	while(Q--){
		cin >> tmp ;
		if(tmp == "PUSHFRONT"){
			cin >> tmp2 ;
			res.push_front(tmp2);
		}
		else if(tmp == "PRINTFRONT"){
				if(!res.empty())
					cout << res.front() << endl;
				else cout << "NONE" << endl;	
		}
		else if(tmp  == "POPFRONT" && !res.empty()){
				res.pop_front();
		}
		else if(tmp == "PUSHBACK"){
			cin >> tmp2 ;
			res.push_back(tmp2);
		}
		else if(tmp == "PRINTBACK"){
				if(!res.empty())
					cout << res.back() << endl;
				else cout << "NONE" << endl;	
		}
		else if(tmp == "POPBACK" && !res.empty()){
				res.pop_back();
		}
		
	}
	return 0;
}
