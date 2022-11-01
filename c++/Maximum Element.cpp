#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int> stack;
  int max[100000],top=0;max[0]=-99999999;
  for(int i=0;i<n;i++)
  {
    int m;
    cin>>m;
    switch(m){
      case 1:cin>>m;
	  		stack.push_back(m);   
        	if(m>max[top])
          	max[++top]=m;     
        	break;
      case 2:
	  		if(max[top]==stack.back())
				top--;
        	stack.pop_back();
        	break;
      case 3:cout<<max[top]<<endl;
        	break;
    }
  }
}
