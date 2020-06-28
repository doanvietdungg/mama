//Các cái bên dưới t nháp sai, đừng đọc =)))
//S[i][j] là độ dài của chuỗi con trong 1->i chia k dư j
//S[0][1->k]=0,   s[i][j]=s[i-1][j-A[i]],s[i-1][j]+1
//th1: s[i][j]=s[i-1][j+a[i]%k]+1; bao gồm i trong dãy
//th2: s[i][j] = s[i-1]
//thêm i vào dãy j=(j+a[i])%k

#include<bits/stdc++.h>
using namespace std;
int n,k,A[1001],L[1001][50],i;
void QHD();
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i <= n; i++) cin >> A[i];
        QHD();
    }
    return 0;
}
void QHD(){
    for(int j = 0; j < k; j++) if(j == (A[1]%k)) L[1][j] = 1; else L[1][j] = 0;
    for(int i = 2; i <= n; i++){
        int r = A[i]%k; // số dư khi chia A[i] cho k
        for(int j = 0; j < k; j++){
            L[i][j] = max(L[i-1][(j-r+k)%k]+1,L[i-1][j]);
            if(j != r && L[i-1][(j-r+k)%k] == 0) L[i][j] = L[i-1][j];  // nếu j khác r, và chưa tồn tại xâu trc đó thì k nhận đc A[i]
        }
    }
    cout << L[n][0] << endl;
}
