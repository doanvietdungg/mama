#include<iostream>

using namespace std;
long long int N , X;
long long int a[10000005];

long int binarySearch(long long int i , long long int n , long long int x){
	long long int l = i , r = n-1;
	while(l <= r){
		long long int mid=(l+r)/2;
		if(a[mid] == x)	return mid+1;
		else if(a[mid] > x) r = mid-1;
		else l = mid + 1;
	}
	return -1;
}

int main(){
	int T ;
	cin >> T ;
	while(T--){
		cin >> N >> X;
		for(long long int i = 0 ; i < N ; i++){
			cin >> a[i];
		}
		long long int i = 0;
		while(a[i] < a[i+1])
			i++;
		
		if(binarySearch(0 , i+1 , X) == -1 && binarySearch(i+1 , N , X) == -1)
			cout << -1 << endl;
		else if(binarySearch(0 , i+1 , X) !=-1)
				cout << binarySearch(0 , i+1 , X) << endl;
		else 
			cout << binarySearch(i+1 , N , X) << endl;			
	}
	return 0;
}
