#include<iostream>
using namespace std;
//find nth term of fibonacii series
//fibonacci Series -> 0,1,1,2,3,5,8,13,21
//term places-> 0-0th term, 1-1st term, 1-2nd term,2-3rd term
//each term is sum of previous two terms...except(0th,1st term)
int fib(int n)
{
    if(n==0 || n==1) //base case
        return n;
    //recursive relation
    // fib(n)=fib(n-1) + fib(n-1)
    int ans=fib(n-1) + fib(n-2);
    return ans;
    //ans is the nth term of fibonacci series
}

int main()
{
   int n;
   cout<<"nth term to find : ";
   cin>>n;
   int ans=fib(n);
    cout<<n<<"th term is = "<<ans;

    return 0;
}