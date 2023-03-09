#include<iostream>
using namespace std;
int main()
{
    int t,n,m,k;
    cin>>t;
  while(t--)
  {
    cin>>n>>m>>k;
    if((n+k)<=m)
    cout<<"YES";
    else
    cout<<"NO";
  }
}