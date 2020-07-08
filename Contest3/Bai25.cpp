#include<iostream>
#include<string>
#include<vector>
using namespace std;
long long F[100];

void Solve(){
	int n ;
	long long k;
	cin >> n >> k;
	while(n > 2)
	{
		if(k <= F[n-2])
			n -= 2;
		else
		{
			k -= F[n-2];
			n -= 1;
		}			
	}
	if(n == 1)
		cout << 'A';
	else cout << 'B';
	cout << endl;	
}
int main(){
	int T;
	cin >> T;
	F[1] = 1 ;
	F[2] = 1;
	for(int i = 3 ; i <= 93 ; i++)
		F[i] = F[i-2] + F[i-1];
	while(T--){
		Solve();
	}	
	return 0;
}
