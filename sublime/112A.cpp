#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string a,b;
	cin>>a>>b;
	if(a.compare(b)==0) cout<<0;
	else if(a.compare(b)>0) cout<<1;
	else cout<<-1;
}