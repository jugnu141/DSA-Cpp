//https://leetcode.com/problems/add-strings/
//1.Unoptimized Solution--Taking too much space and time


//2. Optimized solution
class Solution {
public:

    void addRE(string &num1,int p1,string &num2,int p2,int carry, string &ans)
 {   
    //Base Case
    if(p1 < 0 && p2 <0)
    {
        if(carry != 0)
        {
            ans.push_back(carry + '0');
            return;
        }
        else
            return;
    }

    
    //1 case solve karta hu
    int n1, n2;
    //n1=(p1 >= 0 ? num1[p1] : '0') - '0';
    if (p1 >= 0)
    n1 = num1[p1] - '0';
    else
    n1 = 0; //to add zero intentionally

    //n2=(p2 >= 0 ? num2[p2] : '0') - '0';
    if (p2 >= 0)
    n2 = num2[p2] - '0';
    else
    n2 = 0; //to add zero intentionally

    int csum=n1 + n2 +carry;
    int digit= csum % 10;
    carry= csum / 10;
    ans.push_back(digit + '0');

    //recursive call
    addRE(num1,p1-1,num2,p2-1,carry,ans);
    


 }

    string addStrings(string num1, string num2) {
        string ans="";
        addRE(num1,num1.size()-1,num2,num2.size()-1,0,ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
