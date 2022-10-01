// Finally semester end exams are over for RIT students. Now Laila has no work to do since no fest is happening in college. So she decided to solve this problem in order to pass her time productively.But Laila is not good at maths so she asked for your help.

// You are given an array of length n consisting of n elements and a positive integer k. You need to find the maximum sum of atmost k elements in the array.


#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,m,ele;
    signed long ans=0;
    cin>>n>>m;
    vector<signed long> a;
    for(long i=0;i<n;i++){
        cin>>ele;
        a.push_back(ele);
    }
    
    sort(a.begin(),a.end(),greater<signed long>());
    for(long i=0;i<m;i++)
    {
        if(a[i]>0)
        ans+=a[i];
    }
    cout<<ans;
}