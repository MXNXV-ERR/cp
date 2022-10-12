#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t,ans=0,a,b,c;
	cin>>t;
	while(t--){
		cin>>a>>b>>c;
		if(a+b+c>=2) ans++;
	}
	cout<<ans;
}