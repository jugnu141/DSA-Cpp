//GFG https://www.geeksforgeeks.org/problems/reverse-a-string/1?utm_source=chatgpt.com

class Solution {
  public:
  void solve(string &str, int s,int e)
    {
    //Base case
    if(s >= e)
        return;

    swap(str[s],str[e]);  // 1 case mai solve kiya
    solve(str,s+1,e-1);  // Recursive call
    }

  
    string reverseString(string& str) {
        int s=0;
        int e=str.size()-1;
        solve(str,s,e);
        return str;
        
    }
};
