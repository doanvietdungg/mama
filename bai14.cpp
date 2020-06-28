#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<string> chuyendoi(ll n)
{
    vector<string> a;
    for(ll i=1; i*i*i<=n; i++)
    {
        ll  b = i*i*i;
        string c = to_string(b);   // chuyen sang dang string
        a.push_back(c);
    }
    return a;
}
string solve(ll n )
{
    vector<string> a = chuyendoi(n);
    reverse(a.begin(),a.end());    // đảo ngược để cho xâu lớn lên đầu
    string num = to_string(n);
    for(ll i=0; i<a.size(); i++)
    {
        string c = a[i];
        ll index=0 , k = num.length()-1, h = a[i].length();
        for(ll j=0; j<=k; j++)
        {
            if(num[j]==c[index]) index++;
            if(index==h){
               return c;
            }
        }
    }
    return "-1";
}
main()
{
    int t; cin>>t;
    while(t--)
    {
        ll n;  cin>>n;
        cout<<solve(n)<<endl;
    }
}
