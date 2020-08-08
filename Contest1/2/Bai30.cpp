#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector< vector<int> > res;
vector<int> a;
vector<int> v;
int n , p , s;
bool ok[300] ;
int vt ;
void Sang(){
	for(int i = 2 ; i <= 200 ; i++ )
	{
		if(ok[i] == true)
		{
			a.push_back(i);
			for(int j = i*i ; j <= 200 ; j += i)
				ok[j] = false;	
		}	
	}
}
void Try(int i , vector<int> v ,int sum)
{
	if(sum > s)
		return ;
	if(sum == s && v.size() == n)
	{
		res.push_back(v);
		return;	
	}
	for(int j = i  ; j < a.size() ; j++)
	{
		if(ok[j] == false && sum + a[j] <= s && v.size() < n)
		{
			v.push_back(a[j]);
			ok[j] = true;
			Try(j+1 ,v , sum + a[j]);		
			v.pop_back();
			ok[j] = false;
		}
	}
}
		
int main(){
	int T ;
	cin >> T;
	for(int i = 0 ; i <= 300 ; i++)
		ok[i] = true;
	Sang();
	
//	for(int i = 0 ; i < a.size() ; i++)
//		cout << a[i] << " ";
	while(T--)
	{
		cin >> n >> p >> s;
		vt = upper_bound(a.begin() , a.end() , p) - a.begin() -1;
		for(int i = 0 ; i <= 300 ; i++)
			ok[i] = false;
		res.clear();
		v.clear();
		Try(vt , v , 0);
		cout << res.size() << endl;
		for(int i = 0 ; i < res.size() ; i++)
		{
			for(int j = 0 ; j < res[i].size() ; j++){
				cout << res[i][j] << " ";
			}
			cout << endl;
		}	
	}
	return 0;
}
