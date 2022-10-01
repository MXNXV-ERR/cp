// We have a see-saw on which we have placed 2 objects having weights a and b respectively. If a is greater than b, the swing will move to the left side and if b is greater than a, then the swing will move to the right .If both are of equal weights, then the swing will be balanced.

// if the swing moves to the left print "Right"
// if swing moves to the right print "Left"
// if it is balanced, then print "Balanced"

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long a,b;
    cin>>a>>b;
    if(a>b)
        cout<<"Right";
    else if(a<b)
        cout<<"Left";
    else
        cout<<"Balanced";
    return 0;
}