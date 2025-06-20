#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter rows=";
    cin>>n;
    
    
    // for(int r=0; r<n; r++)      --->nawaz ka method
    // {
    //     for(int c=0; c<n; c++)
    //     {
    //         if(r==c || (r==n-1 && c<n) ||(r>0 && r<(n-1) && c==0))
    //             cout<<"* ";
    //         //if(r==(n-1))
    //             //cout<<"* ";
    //         else
    //             cout<<"  ";
    //     }
    //     cout<<endl;
    // }
    for(int r=0; r<n; r++)  //Method-2
    {
        int totalcolumn=r+1;
        for(int c=0; c<totalcolumn; c++)
        {
            if(r==0 || r==1 || r==n-1) 
                cout<<"* ";
            else
                {
                    if(c==0 || c==(totalcolumn-1)) //middle rows
                        cout<<"* ";
                    else
                        cout<<"  "; //middle column
                }   
        }
        cout<<endl;

    }
//    for(int r=0; r<n; r++)  //Method-3
//     {
//         int totalcolumn=r+1;
//         for(int c=0; c<totalcolumn; c++)
//         {
//             if(r==0 || r==n-1 || c==0 || r==c)
//                 cout<<"* ";
//             else
//             cout<<"  ";
//         }
//         cout<<endl;
//     }  
    return 0;
}