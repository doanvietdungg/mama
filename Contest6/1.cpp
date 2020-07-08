#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		long long a[n];
		for(int i = 0 ; i < n ; i++)
			cin >> a[i];
		sort(a , a+n);
		int l = 0 , r = n-1;
		while(l <= r)
		{
			if(l < r)
			{
			cout << a[r] << " " << a[l] << " ";
			l++;
			r--;
			}
			else if(l == r)	{
				cout << a[r];
				break;	
			}
		}		
		cout << endl;				
	} 	
	return 0;
}
