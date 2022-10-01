// All science is either physics or stamp collecting.

// -Ernest Rutherford

// Ram has collected n number of stamps for years now after a lot of effort. He now wishes to give it to his friend Ridhi who loves receiving stamps as a gift on her birthday to add it to her collection, but rather than giving all the stamps at once, he decides to prolong it so that he can give it to her as many times as possible. But Ridhi does not forget about the last gift she received so Ram cannot give the same amount of stamps to her two times in a row:-

// For example, if he gives 4 stamps to her for the current birthday, say 5 on the next birthday, and 4 again on her next birthday, he cannot give her 4 stamps on the birthday next to it(any other number is possible), but the year after, 4 is again possible since the amount of stamps are not the same twice in a row.

// Find the maximum number of times Ram can gift these stamps to Ridhi.


#include<bits/stdc++.h>
using namespace std;
int main()
{
   long n,ans;
    cin>>n;
    for(int i=0;i<n;i++){
        if((n-((2*i)+i+1))==0||(n-(2*(i+1)+i))==0)
        {   cout<<(2*i+1)<<endl;
            break;
        }
        else if((n-((2*i)+i))==0)
        {
            cout<<2*i<<endl;
            break;
        }
        else
        continue;
    }   
    return 0;
}
//Hint:1,2,1,2,1,2,1..............