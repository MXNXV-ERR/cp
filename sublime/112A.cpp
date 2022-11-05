#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string a,b;
	cin>>a>>b;
	for(int i=0;i<a.length();++i)
	{
		if(a[i]<='Z') a[i]+=32;
		if(b[i]<='Z') b[i]+=32;
		if(a[i]>b[i]){cout<<1;return 0;}
		if(a[i]<b[i]){cout<<-1;return 0;}
	}
	cout<<0;
}