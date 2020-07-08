#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main(){
	int T ;
	cin >> T ;
	while(T--)
	{
		int k;
		cin >> k;
		string s ;
		cin >> s;
		int d[300] = {0};
		for(int i =0 ; i < s.size() ; i++ )
			d[s[i]]++;
		priority_queue<int> a;
		for(int i = 0 ; i < s.size() ; i++)
		{
			if(d[s[i]] > 0)
			{
				a.push(d[s[i]]);
				d[s[i]] = 0;
			}
		}
		while(k > 0 && a.size() > 0)
		{
			k -= 1;
			int tmp = a.top() ; a.pop();
			tmp--;
			a.push(tmp);
		}
		long long res = 0;
		while(a.size() > 0)
		{
			int tmp = a.top();
			a.pop();
			res += tmp*tmp;
		}
		cout << res << endl;
	}

	return 0;
}
