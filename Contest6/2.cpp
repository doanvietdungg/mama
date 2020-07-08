#include<bits/stdc++.h>
using namespace std;
	
long int a[100005];
long int n , x;
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n >> x;
		for(long int i = 0 ; i < n ; i++)
			cin >> a[i];
		//sap xep	
		for(long int i = 0 ; i < n ; i++)
		{
			for(long int j = 0 ; j < n-1 ; j++)
			{
				if(abs(x-a[j]) > abs(x-a[j+1]) )
					swap(a[j] , a[j+1]);
			}
		}
		for(long int i = 0 ; i < n ; i++)
			cout << a[i] << " ";
		cout << endl;					
	}
	return 0;
} 
