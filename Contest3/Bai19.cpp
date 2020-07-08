#include<iostream>
using namespace std;

long long tu , mau;
long long res;
int main(){
	int T ;
	cin >> T ;
	while(T--){
		cin >> tu >> mau;
		while(1)
		{
			if(mau%tu == 0){
				cout << 1 << "/" << mau/tu << endl;
				break;
			}
			else
			{
				res = mau/tu + 1;
				cout << 1 << "/" << res << " + ";
				tu = tu*res - mau;
				mau = mau*res;
			}
		}
	}
	return 0;
}
