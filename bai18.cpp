#include<bits/stdc++.h>
using namespace std;
void findNum(int sum)
{
    int a=0, b=0;
    while(sum>0)
    {
        if(sum%7==0) { a++  ; sum-=7;}
        else if(sum%4==0) { b++ ; sum-=4; }
        else { a++; sum-=7; }                 // nếu sum chia hết cho cả 4 và 7
    }
    if(sum<0) { cout<<"-1"<<endl;  return; }
    for(int i=0; i<b; i++) cout<<"4";
    for(int i=0; i<a; i++) cout<<"7";
    cout<<endl;
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        int sum; cin>>sum;
        findNum(sum);
    }
}
