#include<iostream>
#include<string>

using namespace std;

int k;
string s;

int main(){
	int T;
	cin >> T ;
	while(T--){
		cin >> k >> s;
		for(int i = 0 ; i < s.size() ; i++)
		{
			char Max = s[s.size()-1];
			int pos = s.size()-1;
			for(int j = s.size()-1 ; j > i && k > 0 ; j--)
			{
				if(Max < s[j])
				{
					Max = s[j];
					pos = j ;	
				}
			}
			if(Max > s[i] && k > 0)
			{
				swap(s[i] , s[pos]);
				k--;
			} 		
		}
		cout << s << endl;
	}
	
	return 0;
}
