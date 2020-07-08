#include<bits/stdc++.h>

using namespace std;
long int n , m;
long int a[100005];
long int b[100005];
vector<long int> h;
vector<long int> g;
int main(){
	int T;
	cin >>T;
	while(T--){
		cin >> n >> m;
		for(long int i = 0 ; i < n ; i++)
			cin >> a[i];					
		for(long int i = 0 ; i < m ; i++)
			cin >> b[i];
		h.clear();
		g.clear();
		long int i = 0 , j = 0 ;
		while(i < n && j < m){
			if(a[i] < b[j]){
				h.push_back(a[i]);
				i++;
			}
			else if(a[i] > b[j]){
				h.push_back(b[j]);
				j++;
			}
			else 
			{
				h.push_back(a[i]);
				g.push_back(a[i]);
				i++;
				j++;
			}
		}
		while(i < n){
			h.push_back(a[i]);
			i++;
		}
		while(j < m){
			h.push_back(b[j]);
			j++;
		}
		for(long int i = 0 ; i < h.size() ; i++)
			cout << h.at(i) << " ";
		cout << endl;
		for(long int i = 0 ; i < g.size() ; i++ )
			cout << g.at(i) << " ";
		cout << endl;				
	}	
	return 0;
}

