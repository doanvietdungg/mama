
 #include<bits/stdc++.h>
 using namespace std;
int main()

	{
		long long n;
		string s;
		cin>>s>>n;
		vector<string >res;
		string b=s;
	int d=b.size();
	b[0]=b[d-1];
		for(int i=0;i<b.size();i++){
			b[i]=b[i+1];
		}
		cout<<b;
	}
   

