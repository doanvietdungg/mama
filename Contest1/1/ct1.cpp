#include<iostream>
using namespace std;
int n,x[50];
void in(){
    for(int i=1;i<=n;i++){
        cout<<x[i];
    }
    cout<<" ";
}

void backtrack(int i){
    for(int j=0;j<=1;j++){
        x[i]=j;
        if(i==n){
            in();
        }
        else {
            backtrack(i+1);
        }
    }
}
int main(){
    int t; cin>>t;
    while (t--)
    {
        cin>>n;
        backtrack(1);
        cout<<endl; 
    }
    
}