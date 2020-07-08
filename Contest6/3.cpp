#include<iostream>
using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--)
	{
		int n;
		cin >> n;
		long int a[1005];
		for(int i = 0 ; i < n ; i++)
			cin >> a[i];
		int res  = 0;
		
		for(int i = 0 ; i < n-1 ; i++){
			int min_idx = i;
			for(int j = i+1 ; j < n ; j++)
			{
				if(a[j] < a[min_idx])
				{
					min_idx = j;
				}
			}
			if(min_idx != i )
			{
				swap(a[i] , a[min_idx]);
				res ++;
			}
			
		}
		cout << res << endl;
			
	}
	
	return 0;
}
