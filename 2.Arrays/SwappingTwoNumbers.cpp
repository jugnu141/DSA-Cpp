#include<iostream>
using namespace std;
void output(int a,int b)
{
    cout<<"Before Swapping: a="<<a<<" b= "<<b<<endl;
    int c=a;
    a=b;
    b=c;
    cout<<"after Swapping: a="<<a<<" b= "<<b<<endl;
    
    
}
int main()
{
    int a=10;
    int b=3;
    output(a,b);

    return 0;
}