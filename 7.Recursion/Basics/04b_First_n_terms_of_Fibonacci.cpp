#include<iostream>
using namespace std;
//print first n terms of fibonaccii series

int printfib(int n)
{
    //base case
    if(n==0 || n==1)
        return n;
    //1 case mai solve karunga, baaki recursion
    return (printfib(n-1)+printfib(n-2));
}

void fib(int n)
{
    for(int i=0; i<=n; i++)
    
        cout<<printfib(i)<<" ";
    
}

int main()
{
   int n;
   cout<<"Enter n : ";
   cin>>n;
   fib(n);
   return 0;
}

