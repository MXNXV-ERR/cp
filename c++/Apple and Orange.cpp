#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,a,b,m,n,apple=0,orange=0;
    cin>>s>>t>>a>>b>>m>>n;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        if(a+x>=s && a+x<=t)
            apple++;
    }
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(b+x>=s && b+x<=t)
            orange++;
    }
    cout<<apple<<endl<<orange;
}