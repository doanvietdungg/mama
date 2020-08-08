#include<bits/stdc++.h>

using namespace std;
 
int n,k,s;
int cc =0;
int p[100];
bool temp[201]={0};

int c;
int a[11];
bool ch[21];
int start , end;
vector< vector<int> > v;

void sang(){
	for(int i=2 ; i<200 ; i++){
		if(!temp[i]) {
			p[cc++] = i;
		}
		for(int j=i*2 ; j<200 ; j+=i){
			temp[j] = 1;		
		}
	}
//	for(int i=0 ; i<cc ; i++){
//		cout<<p[i]<<" ";
//	}
}

void out(){
	int sum=0;
	for(int i=1 ; i<=k ; i++){
	//	cout<<a[i]<<" ";
		sum+=a[i];
	}
	
	if(sum == s){
		vector <int> tempp;
		for(int i=1 ; i<=k ; i++)
			tempp.push_back(a[i]);
		v.push_back(tempp);
		c++;
	}
	
//	cout<<endl;
}

void go(int x,int last){
	for(int i=last ; i<=end ; i++){
		if(!ch[i]){
			a[x] = p[i];
			ch[i] = 1;
			
			if(x == k){
				out();
			}
			else go(x+1,i+1);
			ch[i] = 0;	
		}

	}
}

void init(){
	for(int i=0 ; i<cc ; i++){
		if(p[i] >= n){
			start = i;
			break;
		}
	}
	for(int i=cc-1 ; i>=0 ; i--){
		if(p[i] <= s){
			end = i;
			break;
		}
	}
	for(int i=start ; i<=end ; i++){
		ch[i] = 0;
	}
	v.clear();
	
	c=0;
}

void re(){
	cout<<c<<endl;
	for(int i=0 ; i<v.size() ; i++){
		for(int j=0 ; j<v[i].size() ; j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
}

main(){
	int t;
	cin>>t;
	sang();
	while(t--){
		cin>>k>>n>>s;
		init();
		go(1,start);
		re();
	}
}
