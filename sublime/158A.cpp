#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t,ans=0,n;
	cin>>t>>n;
	vector<int> a;
	for (int i = 0; i < t; ++i)
	{
		int ele;
		cin>>ele;
		a.push_back(ele);
	}
	sort(a.begin(), a.end(),greater<int>());
	t=a[n-1];
	ans=n;
	if(t==0) {
		while(a[n-1]==0){
			ans--;
			n--;
		}
	}
	else{
		//ans=n;
		while(a[n-1]==a[n]){
			ans++;n++;
		}
	}
	cout<<ans;
}