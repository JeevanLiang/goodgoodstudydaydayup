#include<iostream>
using namespace std;
int num(int n)
{
    if (n==0) return 0;
    if (n==1) return 1;
    else return num(n-1)+num(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<num(n);
}