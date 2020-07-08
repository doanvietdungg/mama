#include<iostream>

using namespace std;

int main(){
		int n;
		cin >> n;
		int a[105];
		for(int i = 0 ; i < n ; i++)
			cin >> a[i];
		for(int i = 0 ,d = 1; i < n-1 ; i++ , d++){
			bool check = false;
			for(int j = 0 ; j < n-i-1 ; j++){
				if(a[j] > a[j+1]){
					swap(a[j] , a[j+1]);
					check = true;
				}
			}
			if(check != false){
				cout << "Buoc " << d << ": ";
				for(int k = 0 ; k < n ; k++){
					cout << a[k] << " ";
				}
				cout << endl;
			}
			else if(check == false)
				break; 
		}				
	return 0;
}
