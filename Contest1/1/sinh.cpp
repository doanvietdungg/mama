
#include <iostream>
 
using namespace std;
 
int a[10],n;
 
void init ()
{
    cin >> n; //nhap n;
}
 
void output()
{
    for(int i=0;i<n;i++)
        cout << a[i]<<" ";
    cout << endl;
}
 
void tim(int i)
{
    for(int j=0;j<=1;j++)
    {
        a[i]=j;
        if(i==n-1)   //n?u t�m d?n x i cu?i c�ng th� xu?t ra ket qu?
            output();
        else
            tim(i+1); // chua t�m d?n i cu?i th� tang i l�n
    }
}
 
int main()
{
    init();  //kh?i t?o
    tim(0);
}
