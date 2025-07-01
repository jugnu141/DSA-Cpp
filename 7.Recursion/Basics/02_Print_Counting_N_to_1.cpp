#include<iostream>
using namespace std;

void print_counting_N_to_One(int n)
{
    //base case
    if(n==0)
        return;
    
    //processing
    cout<<n<<" ";
    //recursive call
    print_counting_N_to_One(n-1);
}
void print_counting_One_to_N(int n)
{
    if(n==0)
    {
        return;
    }
    print_counting_One_to_N(n-1);
    cout<<n;
}

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    print_counting_N_to_One(n);
    //print_counting_One_to_N(n);
    return 0;
}