#include<iostream>
#include<string>

using namespace std;

int main(){
	int T ;
	cin >> T;
	while(T--){
		string s;
		cin >> s;
		int d[1000] = {0};
		int res = 0;
		for(int i = 0 ; i < s.size() ; i++){
			d[s[i]]++;
			if(d[s[i]] > res)
				res = d[s[i]];
		}
		if(res <= (s.size() - res) && s.size() %2 == 0)
			cout << 1 << endl;
		else if(res <= (s.size()/2 + 1) && s.size() %2 == 1)
			cout << 1 << endl;
		else cout << -1 << endl;		
		
	}
	
	return 0;
}
