//https://leetcode.com/problems/edit-distance/description/

class Solution {
public:
    //Using only Recursion, TLE, try by DP Later
    int solve(string &word1, string &word2,int i,int j)
    {
        // Base case
        if(i >= word1.size())
        //word1 string end ho gyi
        //means, word1 ki length shayad word2 se choti hai
            return word2.size()-j;
        if(j >= word2.size())
            return word1.size()-i;
        
        int ans=0;
        if(word1[i]==word2[j])
            //Match
            ans=0 + solve(word1,word2,i+1,j+1);
        else
        {
            //Not Match
            //Operation perform karo
            int ins=1+solve(word1,word2,i,j+1);
            int del=1 + solve(word1,word2,i+1,j);
            int rep=1 + solve(word1,word2,i+1,j+1);
            ans=min(ins,min(del,rep));
        }
        return ans;
        
         
    }

    int minDistance(string word1, string word2) {
        int i=0;
        int j=0;
        return solve(word1,word2,i,j);
    }
};
