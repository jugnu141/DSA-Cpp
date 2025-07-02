#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
//find last occurrence index of char in string
//Search Left to Right
//Searh Right to left

void solve(string &str,char ch,int i,int &indexAns)
{
    //base case
    if(i < 0)    //right to left search
        return;
    //1 case mai solve karunga, baaki recursion krega
    if(str[i]==ch)
    {
        indexAns=i;
        return;
    }
    solve(str,ch,i-1,indexAns);
    //
}
    
int main()
{
    string str="rabcbdedd";
    char ch='r';
    int i=str.size()-1;
    int indexAns=-1;
    solve(str,ch,i,indexAns);
    cout<<"Last Occurence Index : "<<indexAns; 
    return 0;
}
