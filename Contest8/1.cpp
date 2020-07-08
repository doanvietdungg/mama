#include<iostream>
#include<queue>
using namespace std;
long long tmp1;
int n;
int main(){
	long int T;
	cin >> T;
	while(T--){
		queue<long long> res;
		cin >> n;
		while(n--){
			int tmp;
			cin >> tmp;
			switch(tmp)
			{
				case 1:
				{
					cout << res.size() << endl;
					break;	
				}
				case 2:
				{
					if(res.empty())
						cout << "YES" << endl;
					else cout << "NO" << endl;
					break;		
				}
				case 3:
				{
					cin >> tmp1;
					res.push(tmp1);
					break;
				}
				case 4:
				{
					if(!res.empty())
						res.pop();
					break;	
			
				}
				case 5:
				{
					if(!res.empty())
						cout << res.front() << endl;
					else cout << -1 << endl;
					break;		
				}
				case 6:
				{
					if(!res.empty())
						cout << res.back() << endl;
					else 
						cout << -1 << endl;	
					break;		
				}	
			}
		}
	}
	return 0;
}
