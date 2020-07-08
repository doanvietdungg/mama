#include<iostream>
#include<vector>
using namespace std;

vector<long long> a;
// Dem so luong vi tri trung tam
void Solve1(long long n){
	long t = 0 ; 
	long long mu = 1;
	while(n/2 > 0)
	{
		t++;
		if(t == 1)
		{
			a.push_back(2);
			mu = 2;
		}
		else
		{
			mu *= 2;
			a.push_back(mu);
		}
		n /= 2;
	}
}
long long Solve2(long long k , long long n , long long pos)
{
	if(k%2 ==1) return 1;
	if(k < a[pos])
		Solve2(k , n/2 , pos-1);
	else if(k == a[pos]) return n%2;
	else if(k > a[pos])	Solve2(2*a[pos]-k , n/2 , pos-1);		
}
int main(){
	int T;
	cin >> T;
	while(T--){
		a.clear();
		long long n  , l , r , res = 0;
		cin >> n >> l >> r;
		Solve1(n);
		for(long long i = l ; i <= r ; i++ )
			res += Solve2(i , n , a.size()-1);
		cout << res << endl;	
	}
	return 0;
}
