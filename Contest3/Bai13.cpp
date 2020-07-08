#include<iostream>
#include<string>

using namespace std;

int main(){
	int T ;
	cin >> T ;
	while(T--){
		int D;
		cin >> D;
		string s ;
		cin >> s;
		int d[300] = {0};
		int max = 0;			// max la so luong cua phan tu xuat hien nhieu nhat
		for(int i = 0 ; i < s.size() ; i++){
			d[s[i]] ++;
			if(d[s[i]] > max)
				max = d[s[i]];
		}
		if((max-1)*(D-1) > (s.size() - max))
			cout << -1 << endl;
		else cout << 1 << endl;	
		
	}
	
	return 0;
}
