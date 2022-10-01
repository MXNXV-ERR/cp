// Saumya was caught sneaking out of her hostel by her monstrous warden!!!! The only way she can save herself is by solving the given problem -

// Her warden gives her a weird non stopping matrix whose first square is 1, the square on the right of 1 being 2, and so on.... as shown in the image.

// She wants you to find the value of the element at the coordinates b and a of this weird matrix, else the warden is going straight to call her parents.(b corresponds to the row and a corresponds to the column).

// https://s3.amazonaws.com/hr-assets/0/1664433428-9693f5ab5e-Screenshot2022-09-29120527.png

#include<bits/stdc++.h>
using namespace std;
long spiral(long x,long y){
    if(x<y){
        if(y%2==1)
            return (y*y)-x+1;
        else
            return (y-1)*(y-1)+x;
    }
    else{
        if(x%2==0)
            return (x*x)-y+1;
        else
            return (x-1)*(x-1)+y;
    }
}
int main()
{
  long n,x,y;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>x>>y;
    cout<<spiral(x,y)<<endl;
  }
}