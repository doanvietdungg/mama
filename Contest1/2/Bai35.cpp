#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n , k , s , res ;
int a[21];
void Try(int i){
	for(int j = a[i-1]+1 ; j <= n-k+i ; j++){
		a[i] = j;
		if(i == k)
		{
			int sum = 0;
			for(int l = 1 ; l <= k ; l++)
				sum += a[l];
			if(sum == s)
				res++;	
		}
		else
			Try(i+1);		
	}	
}

int main(){
	while(1)
	{
		cin >> n >> k >> s;
		for(int i = 0 ; i <= n ; i++)
			a[i] = i;	
		res = 0;
		if( n == 0 && k == 0 && s == 0) break;
		Try(1);
		cout << res << endl;
	}
	return 0;
}
