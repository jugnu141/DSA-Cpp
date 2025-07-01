#include<iostream>
#include<vector>
using namespace std;
//T.C- O(2^n)
void printSubSequences(string str,string output,int index,
                        vector<string> &ans)
{
    //base case
    if(index==str.length())
    {
        //cout<<output<<endl;
        ans.push_back(output);
        return;
    }
    //1 case mai solve karunga
    char ch=str[index];
    //include ch
    printSubSequences(str,output+ch,index+1,ans);
    //exclude ch
    printSubSequences(str,output,index+1,ans);
    //baaki recursion solve krega
}

int main()
{
    string str="abc";
    string output="";
    int index=0;
    vector<string>ans;
    printSubSequences(str,output,index,ans);
    cout<<"Size of ans : "<<ans.size()<<endl;   
    for(auto i:ans)
        cout<<i<<endl;
    return 0;
}