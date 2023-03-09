#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,ans;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    ans=x/y;
	    ans=ans+(x%y);
	    cout<<ans<<endl;
	}

	return 0;
}
