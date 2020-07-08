#include<iostream>
#include<string>
using namespace std;

int main(){
	string a , b;
	int k;
	cin >> k >> a >> b;
	while(a.size()  > b.size()) b = "0" + b;
	while(a.size() < b.size()) a = "0" + a;
	string res = "";
	int nho = 0;
	for(int i = a.size()-1 ; i >= 0 ; i--)
	{
		int so = int(a[i] - '0') + int(b[i] - '0') + nho;
		res = char(so%k + '0') + res;
		nho = so/k;
	}
	if(nho > 0) res = char(nho + '0') + res;
	cout << res ;	
	return 0;
}
