#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int>findcomplement(vector<int>binary)
{
    int n=binary.size();
    vector<int>twoscomp(n,0); 
    //same size of input vector

    //step-1 flip the bits
    for(int i=0; i<n; i++)
    {
        //twoscomp[i]=binary[i]==0 ? 1 : 0;
        //another way to flip elements 
        if(binary[i]==0)
            twoscomp[i]=1;
        else
            twoscomp[i]=0;
    }

    //step-2. add 1
    int carry=1;
    for(int i=n-1; i>=0; i--)
    {
        int sum=twoscomp[i]+carry;
        twoscomp[i]=sum % 2;
        carry = sum/2;
    }

    if(carry==1)
    {
        twoscomp.insert(twoscomp.begin(),1);
        //inserting 1 at the beginning of vector twoscomp

        //twoscomp.insert(twoscomp.begin()+1,9);
        //output 190000, to understand how insertion 
        //work in vector 
        //Vector_name.insert(position,value)
       
    }
    return twoscomp;
     
}
int main()
{
    vector<int> binary ={0,0,0,0};
    vector<int> twoscomp=findcomplement(binary);
    cout<<"2's Complement is = ";
    for(int i=0; i<twoscomp.size(); i++)
    {
       cout <<twoscomp[i]<<" ";
    }
    return 0;
}
