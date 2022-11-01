#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int space=n;
	for(int i=0;i<=n;i++){
		for(int k=0;k<space;k++)
			cout<<"a";
		for(int j=0;j<2*i-1;j++)
			cout<<" *";
		space--;
		cout<<endl;
	}
}