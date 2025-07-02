//https://leetcode.com/problems/valid-palindrome/
//STL- isalnum()- to check if char is alphanumeric characters, (letter or numbers)
//     tolower()- to convert Upper Case letter into Lower case

class Solution {
public:
    bool solve(string &str, int s, int e)
    {
        //base case
            
            //while(s<=e && !((str[s] >='a' && str[s] <= 'z') || (str[s] >= '0' && str[s] <= '9'))) 
            
            while(s < e && !isalnum(str[s]))
                s++;

            //while(s<=e && !((str[e] >='a' && str[e] <= 'z')  || (str[e] >= '0' && str[e] <= '9')))
            while(s < e && !isalnum(str[e]))
                e--;

            //base case
            if(s >= e) //what if s,e incremented too much
                return true; //no any lower case character

            if(str[s]==str[e])
                return solve(str,s+1,e-1);
            else
                return false;
    }

    bool isPalindrome(string str) {
        for(int i=0; i<str.size(); i++)
        {
            str[i]=tolower(str[i]);
        }
        int s=0;
        int e=str.size()-1;
        return solve(str,s,e);
    }
};
