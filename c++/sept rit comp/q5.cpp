// Casio has n super powers but he is quite weak in gaining them. A villian "maurits" require K strokes of super power to be defeated. Casio knows how much time it requires to gain a super power and it is given in an array A of size n.If casio want ith super-power t times it will take (Ai * t)seconds Casio can gain super power simultaneously.
// example: [3,2,7] , k=7(this much stroke will destroy maurtis)
// casio can gain 2 unit of super power at index 1 which cost (3*2) = 6 seconds
// casio can gain 4 unit of super power at index 2 which cost (4*2) = 8 seconds
// casio can gain 1 unit of super power at index 3 which cost (7*1) = 7 seconds
// so time req for this is 8 seconds.At 8th second Casio has total (2unit + 4 unit + 1 unit)=7 unit of super power which can destroy "maurtis".
// what is the minimum time required to gain K stroke of super power to defeat "maurtis".
// Input Format

// The first input line has two integers n and K: the number of super-power and number of stroke of super power req to defeat "maurtis".
// The next line has n integers A1,A2,…,An: the time needed to make gain a single unit of i-th super power.


#include<bits/stdc++.h>
using namespace std;
long findMinDiff(vector<long>& arr)
{

    sort(arr.begin(), arr.end());
 
    long diff = 999999999999999999;
 
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
    addval=findMinDiff(a);
  for(i=0;i<n;i++){
    cin>>ele;
    if(ele<minele)
        minele=ele;
    a.push_back(ele);
    
  }
    
  for(i=minele;;i++){
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
//TLE------------------------------------------------------->