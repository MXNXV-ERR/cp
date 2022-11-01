#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	cin>>a>>b;
	cout<<a.size()<<" "<<b.size();
	cout<<endl<<a+b<<endl;
	cout<<b[0]<<a.substr(1,a.size())<<" "<<a[0]<<b.substr(1,b.size());
}