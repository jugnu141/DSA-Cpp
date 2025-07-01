#include<iostream>
using namespace std;

int  getfactorial(int n)
{
    //base case 
    if(n==0 || n==1)
        return 1;
    
    //recursive function
    //fact(n)= n * fact(n-1)
    int finalans= n * getfactorial(n-1);
    return finalans;

    //processing part--> optional

}

int main()
{
    int n;
    cout<<"Enter value of n = ";
    cin>>n;
    int ans= getfactorial(n);
    cout<<"Factorial of "<<n<<" is = "<<ans;

    return 0;
}