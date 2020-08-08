#include<iostream>
using namespace std;

int n , m;
int a[101][101];
int res;
void Init(){
	cin >> m >> n;
	for(int i = 1 ; i  <= m ; i++){
		for(int j = 1 ; j <= n ; j++){
			cin >> a[i][j];
		}
	}
	res = 0;
}
void Try(int i , int j)
{
	if(i == m && j == n)
	{
		res++;
	}
	if(i < m)
	{
		Try(i+1 , j);
	}
	if(j < n)
	{
		Try(i , j+1);
	}
}
int main(){
	int T ;
	cin >> T;
	while(T--)
	{
		Init();
		Try(1,1);
		cout << res << endl;		
	}
	return 0;
}
