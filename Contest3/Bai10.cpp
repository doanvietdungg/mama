#include<iostream>
#include<queue>

using namespace std;

int main(){
	int T; 
	cin >> T;
	while(T--){
		long long int n;
		cin >> n;
		priority_queue<long long int , vector<long long int> , greater<long long int> > a;
		long long int tmp;
		for(long long int i = 0 ; i < n ; i++){
			cin >> tmp;
			a.push(tmp);
		}
		long long int res = 0;
//		while(a.size()){
//			cout << a.top() << " ";
//			a.pop();
//		}
//		cout <<  endl;
		while(a.size() > 1){
			long long int x = a.top();
			a.pop();
			long long int y = a.top();
			a.pop();
			a.push(x+y);
			res += x+y;
		}
		cout << res << endl;
	}
	
	return 0;
}
