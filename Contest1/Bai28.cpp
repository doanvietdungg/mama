#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;  

int a[25];
int n , x;
vector< vector<int> > res;
vector<int> v;

void Try(int i , int sum , vector<int> v)
{
	if(sum > x)
		return ;
	if(sum == x)
	{
		res.push_back(v);
		return ;	
	}
	for(int j = i ; j <= n ; j++)
	{
		if(sum + a[j] <= x)
		{
			v.push_back(a[j]);
			Try(j , sum + a[j] , v);
			v.pop_back();
		}
	}	
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n >> x;
		for(int i = 1 ; i <= n ; i++ )
			cin >> a[i];
		sort(a+1 , a+n+1);	
		v.clear();
		res.clear();
		Try(1,0,v);
		if(res.size() == 0)
			cout << -1 << endl;
		else
		{
			for(int i = 0 ; i < res.size() ; i++){
				cout << "[";
				for(int j = 0 ; j < res[i].size() ; j++)
					cout << res[i][j] << " ";
				cout << "] ";		
			}
		}
		cout << endl;		
	}
	
	return 0;
}
