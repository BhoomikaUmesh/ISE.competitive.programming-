#include <iostream>
#include<algorithm>
#include<climits>

using namespace std;

int main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    sort(s,s+n);
    int min_diff=INT_MAX;
    for(int i=0;i<n-1;i++)
    {
        int diff=s[i+1]-s[i];
        if(diff<min_diff){
            min_diff=diff;
        }
    }
    cout<<min_diff<<endl;
}
return 0;
}
