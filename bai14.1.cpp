#include<bits/stdc++.h>
using namespace std;
int n, Prime[1000007];
bool ngto( int n)
{
    Prime[0]=false; Prime[1]=false;
    for(int i=2;i<=n;i++) Prime[i]=true;
    for(int j=2;j*j<=n;j++)
    {
        if(Prime[j]==true)
        {
            for(int k=j*j;k<=n;k+=j)       //  nếu j là prime thì bội số của j ko là prime
                Prime[k]=false;
        }
    }
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n;
        int h=0;
        ngto(n);
        for(int i=2;i<=n/2;i++)
        {
            if(Prime[i]&&Prime[n-i]) {
                cout<<i<<" "<<n-i<<endl;
                h=1;
                break;
            }
        }
        if(h==0) cout<<"-1"<<endl;
    }
}