#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,n,ele;
	cin>>m>>n;
	vector< vector< int > > a;
	for (int i = 0; i < m; ++i)
	{
		int x;
		cin>>x;
		vector<int> y;
		for (int i = 0; i < x; ++i)
		{
			cin>>ele;
			y.push_back(ele);
		}
		a.push_back(y);
	}
	for (int i = 0; i < n; ++i)
	{
		int x,y;
		cin>>x>>y;
		cout<<a[x][y]<<endl;
	}
	return 0;
}