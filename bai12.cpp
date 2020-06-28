#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    cin.ignore(1);
    while(t--)
    {
        string s; cin>>s;
        vector<int> a(26);
        int dem=0;
        for(char c : s){
            dem = max(dem, ++a[c-'a']);    // gán dem = tần số xuất hiện max
        }
        int k = s.length()-dem;
        if(dem<=k+1) cout<<"1"<<endl;       // k+1 là vì có k+1 ô để nhét k kí tự
        else cout<<"-1"<<endl;
    }
    return 0;
}

