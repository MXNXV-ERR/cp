#include<bits/stdc++.h>
using namespace std;
long findMinDiff(vector<long>& arr,int n)
{

    sort(arr.begin(), arr.end());
 
    long diff = -999999999;
 
    for (int i = 0; i < arr.size(); i++)
        if (arr[i + 1] - arr[i] < diff)
            diff = arr[i + 1] - arr[i];
 
    return diff;
}
int main()
{
  long n,k,ele,i,minele=99999999,addval;
  cin>>n>>k;
    
  vector<long> a;
    
  for(i=0;i<n;i++){
    cin>>ele;
    if(ele<minele)
        minele=ele;
    a.push_back(ele);
    
  }
    addval=findMinDiff(a,n);
  for(i=minele;;i+=addval){
    long sum=0;
    for(size_t j=0;j<a.size();j++)
    {
        sum+=(i/a[j]);
    }
    if(sum==k)
        break;
  }
  cout<<i;
}