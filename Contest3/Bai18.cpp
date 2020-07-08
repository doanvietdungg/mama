#include<iostream>
#include<stack>

using namespace std;
long int n;
int main(){
	int T;
	cin >> T ;
	while(T--)
	{
		cin >> n;
		long int res4 = 1e5 , res7 = 1e5;
		long int d4 = 0 , d7 = 0;
		for(long int i = n/3 ; i >= 0 ; i-- )
		{
			if(4*i <= n && (n-4*i)%7 == 0 )
			{
				d4 = i;
				d7 = (n-4*i)/7;
				if(res4 + res7 > d4+d7){
					res4 = d4;
					res7 = d7;
				}
				else if(res4+res7 == d4+d7)
				{
					if(res4 > d4 )
					{
						res4 = d4;
						res7 = d7;
					}	
				}
			}
		
		}
		if(4*res4 + 7*res7 == n)
		{
			for(int i = 0 ; i < res4 ; i++)
				cout << 4;
			for(int i = 0 ; i < res7 ; i++)	
				cout <<7; 	
		}
		else 
			cout << -1 << endl;
		cout << endl;	 
	}
	
	return 0;
}
