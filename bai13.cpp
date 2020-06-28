#include<bits/stdc++.h>
#define ll long long
using namespace std;

main()
{
    int t; cin>>t;
    cin.ignore(1);
    while(t--)
    {
        ll d; cin>>d;
        string s; cin>>s;
        vector<ll> a(256);
        ll dem=0;
        for(char c : s)
        {
            dem = max(dem, ++a[c-'a']);  // gán dem = tần số max
        }
        ll k = s.length();
        if(pow(dem-1,d-1)+dem <= k) cout<<"1"<<endl;   // tinh hoa
        else cout<<"-1"<<endl;
    }
}
