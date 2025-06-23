//Assignment Question: Missing elements from an array
//with duplicate elememts

#include<iostream>
#include<vector>
using namespace std;



int main()
{
    vector<int> arr={1,3,5,3,4};
    arr.insert(arr.begin(),737);
    
    //737 at 0th index-----no use
    //1----1th index
    //2----2nd index

    //visiting with -1
    for(int i=1; i<arr.size(); i++)
    {
        int index=abs(arr[i]);
        //abs()--absolute function to take a number +ve
        if(arr[index] > 0)
            arr[index] = arr[index]*-1;
        //elements -ve ho gya
        //jo element negative nahi hua
        //uska index hi answer hoga,(i.e.,missing element)
    }

    int missing =0;
    for(int i=1; i<arr.size(); i++)
    {
        if(arr[i] > 0)
        {
            missing=i;  
            break;     //better optimization of code
        }  
    }
    cout<<"Missing element = "<<missing<<endl;

    return 0;
}