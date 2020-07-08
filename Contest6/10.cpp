#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
long n;
long long a[10000005];
long long sodu , tmp; 
vector<int> b;
int main(){
	int T;
	cin >> T;
	while(T--){	
		cin >> n;
		for(long i = 0 ; i < n ; i++ )
			cin >> a[i];		
		b.clear();
		for(long i = 0 ; i < n ; i++ ){
			tmp = a[i];
			while(tmp != 0){
				sodu = tmp%10;
				b.push_back(sodu);
				tmp /= 10;
			}
		}
		sort(b.begin() , b.end());
		for(long long i = 0 ; i < b.size() - 1 ; i++ ){
			if(b.at(i) != b.at(i+1) ) 
				continue;
			while(b.at(i) == b.at(i+1) ){
				b.erase(b.begin() +i+1 );
			}
		}
		for(long long i =  0 ; i < b.size() ; i++)
			cout << b.at(i) << " ";
		cout << endl;			
	}
	
	return 0;
} 
