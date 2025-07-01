#include<iostream>
using namespace std;

int power(int n)
{
    if(n==0) //base case,power of 0 is 1
        return 1;
    int ans=2 * power(n-1);
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<"ans is = "<<power(n);
    return 0;
}