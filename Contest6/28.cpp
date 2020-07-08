#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[105];
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];
	int tmp , i;
	for( i = 1 ; i < n ; i++){
		tmp = a[i];
		int j = i-1;
		while(j >=0 && a[j] > tmp)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = tmp;
		cout << "Buoc " << j << ": ";
		for(int l = 0 ; l < j  ; l++){
			cout << a[n-l-1] << " ";
		}
		cout << endl;
	}
	return 0;
}

