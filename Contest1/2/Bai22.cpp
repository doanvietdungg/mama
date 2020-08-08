#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int n;
int a[15][15];
bool check;
vector<string> res;

void Init(){
	cin >> n;
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++)
			cin >> a[i][j];
	}
	check = false;
	res.clear();
}

void Try(int i , int j , string s){
	if(a[1][1] == 0 || a[n][n] == 0)
	{
		check  = false;
		return ;
	}
	if(i == n && j == n && a[n][n])
	{
		res.push_back(s);
		check = true;
		return;
	}
	if(i < n && a[i+1][j])
	{
		Try(i+1 , j , s +"D");	
	}
	if(j < n && a[i][j+1])
	{
		Try(i , j+1 , s + "R");
	}
	if(i < n && j < n && !a[i+1][j] && !a[i][j+1] || i > n || j > n)
	{
		check = false;
		return;
	}
}
int main(){
	int T;
	cin >> T;
	while(T--){
		Init();
		Try(1 , 1 , "");
		if(!check)
		{
			cout << -1 << endl;
		}
		else
		{
			sort(res.begin() , res.end());
			for(int i = 0 ; i < res.size() ; i++)
				cout << res[i] << " ";
			cout << endl;	
		}			
	}	
	return 0;
}
