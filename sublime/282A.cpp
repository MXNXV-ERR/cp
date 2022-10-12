#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,ans=0;
	cin>>t;
	while(t--){
		string in;
		cin>>in;
		in[1]=='+'?ans++:ans--;
	}
	cout<<ans;
}