#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n;
	string sl[n];
	for(int i=0;i<n;i++)
		cin>>sl[i];
	cin>>m;
	string ql[m];
	for(int i=0;i<m;i++)
		cin>>ql[i];
	for(int i=0;i<m;i++)
	{
		int c=0;
		for(int j=0;j<n;j++)
		{
			if(ql[i]==sl[j])c++;
		}
		cout<<c<<endl;
	}
}
