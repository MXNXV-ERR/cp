#include<bits/stdc++.h>
using namespace std;
int countFreq(int n,int k)
{
	int c=0;
	while(n>0)
	{
		if(n%10==k)c++;
		n/=10;
	}
	return c;
}
int getNum(vector<int> &a,int k)
{
	int pos=0,freq=0,t;
	for (int i = 0; i < a.size(); ++i)
	{
		t=countFreq(a[i],k);
		if(t>freq)
		{	freq=t;
			pos=i;
		}
	}
	return a[pos];
}
int main()
{
	int n,ele,k;
	cin>>n>>k;
	vector<int> a;
	for (int i = 0; i < n; ++i)
	{
		cin>>ele;
		a.push_back(ele);
	}
	cout<<getNum(a,k);

}