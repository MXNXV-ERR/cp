#include <bits/stdc++.h>

using namespace std;
long a[10000000];
int main()
{
    int n,m;
    cin>>n>>m;
    long x,y,z,sol=-9999999;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y>>z;
        a[x-1]+=z;
        a[y]-=z;
    }
    long l=0;
    for(int i=0;i<n;i++)
    {
        l+=a[i];
        sol=sol>l?sol:l;
    }
    cout<<sol;
}