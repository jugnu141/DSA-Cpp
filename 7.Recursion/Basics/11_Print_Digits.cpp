#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void PrintDigits(int n)
{
    if(n==0) //base case
        return;
    int digit= n % 10;
    n=n/10;
    PrintDigits(n);
    cout<<digit<<" "; //
}


int main()
{
    int n=3245;
    PrintDigits(n);
    return 0;
}