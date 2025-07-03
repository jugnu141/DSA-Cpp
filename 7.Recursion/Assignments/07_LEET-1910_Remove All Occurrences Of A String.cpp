//https://leetcode.com/problems/remove-all-occurrences-of-a-substring/
//Solved Using Recursion
//Inbuilt functions, Like: .find()  .erase()   are used

class Solution {
public:
    //solved using recursion

    void solve(string &str, string &sub)
    {
    int location=str.find(sub); //find substring position
    if(location == string::npos) //base case
        return; //no position found

    //1 case mai solve karunga,baaki recursion karega
    str.erase(location,sub.size());
    solve(str,sub);
    }

    string removeOccurrences(string str, string sub) {
        solve(str,sub);
        return str;
    }
};
