#include<iostream>
using namespace std;
//print square star pattern with side=5 star

int main()
{
  for(int r=0; r<5; r++) //row is outer loop
  {
 
    for(int c=0; c<5; c++)//column is inner loop
    {
      cout<<"* ";
    }
    cout<<endl;
  }
  return 0;
}