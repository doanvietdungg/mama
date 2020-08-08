#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int n;
int a[15][15];
vector<string> res;
bool check[15][15];
void Init(){
	cin >> n;
	for(int i = 1 ; i  <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			cin >> a[i][j];
			check[i][j] = false;
		}
	}
	res.clear();
}

void Try(int i, int j , string s){
	if(a[1][1] == 0 || a[n][n] == 0)
	{
		return ;
	}
	if(i == n & j == n && a[n][n])
		res.push_back(s);
	if(a[i+1][j] == 1 && i < n && !check[i+1][j]){
		check[i][j] = true;
		Try(i+1 , j , s+"D");
		check[i][j] = false;
	}
	if(a[i-1][j] == 1 && i < n && !check[i-1][j])
	{
		check[i][j] = true;
		Try(i-1 , j , s+"U");
		check[i][j] = false;
	}	
	if(a[i][j+1] == 1 && j < n && !check[i][j+1])
	{
		check[i][j] = true;
		Try(i , j+1 , s+"R");
		check[i][j] = false;
	}
	if(a[i][j-1] == 1 && i < n && !check[i][j-1])
	{
		check[i][j] = true;
		Try(i , j-1 , s+"L");
		check[i][j] = false;
	}		
}

int main(){
	int T;
	cin >> T;
	while(T--){
		Init();
		Try(1 , 1 , "");
		if(res.size() == 0)
			cout << -1 << endl;
		else
		{
			sort(res.begin() , res.end());
			for(int i = 0 ;  i < res.size() ; i++)
				cout << res[i] << " ";
			cout << endl;		
		}	
	}
	
	return 0;
}
