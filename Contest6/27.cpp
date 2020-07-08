#include<iostream>

using namespace std;
int main(){
	int n;
	cin >> n;
	int a[105];
	for(int i = 0 ; i < n ; i++)
		cin >> a[i]; 
	for(int i = 0 ; i < n-1 ; i++){
		int min_idx = i; 
		for(int j = i+1 ; j < n ; j++ ){
			if(a[j] < a[min_idx])
				min_idx = j;
		}
		if(min_idx != i)
			swap(a[i] , a[min_idx]);
		cout << "Buoc " << i+1 << ": ";
		for(int i = 0 ; i < n ; i++)
			cout << a[i] << " ";
		cout << endl;	
	}
}
