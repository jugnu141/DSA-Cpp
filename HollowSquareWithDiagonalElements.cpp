#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter side of square= ";
    cin>>a;
    for(int r=0; r<a; r++) // outer loop(for rows)-always same
    {
        for(int c=0; c<a; c++) //inner loop(for column)-dimag laga k likhna
        {
            if(r==0 || r==(a-1) || r==c )
                cout<<"* ";
            else{
                if(c==0 || c==(a-1))
                cout<<"* ";
                else
                cout<<"  ";
            }
        }
        //Ye Mai Bhul jata hun
        cout<<endl;
    }
    return 0;

}