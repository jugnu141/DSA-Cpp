//LEETCODE-37 (HARD)
//Solved: By Tutorial
//Revision: 0 times
//DRY_RUN: 0 times


class Solution {
public:
    bool isSafe(char digit,int row,int col,vector<vector<char>>& board){
        //3 rule to follow
        //rowCheck
        for(int k=0; k<board.size(); k++){
            if(board[row][k]==digit)
                //same digit pahle se, same row par exist krta hai
                return false;
        }
        //colCheck
        for(int k=0; k<board.size(); k++){
            if(board[k][col]==digit)
                //same digit pahle se, same column par exist krta hai
                return false;
        }
        //3x3 sub-box check
        for(int k=0; k<board.size(); k++){
            if(board[3*(row/3) + k/3][3*(col/3) + k % 3]==digit)
                //same digit pahle se, 3x3 box me exist krta hai
                return false;
        }
        //agar teeno rules badiya follow ho raha hai,
        return true;
    }


    bool solve(vector<vector<char>>& board)
    {
        //entire logic here
        //no base case -this is not infinite recursive call,so we dont need 
        //base case to stop the recursive call

        //1 case mai solve karunga,baaki recursion kar lega
        // sabse pahle find the empty cell
        // empty -> '.'
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[i].size(); j++){
                //mai i,j wale cell par hu
                //par pata kaise chalega, data fill karu ya nahi
                //sirf empty cell par fill karenge
                if(board[i][j]=='.'){
                    //fill this cell, bcoz its empty
                    //empty cell par 1->9 digit hit and trial karna hai
                    for(char digit='1'; digit<='9'; digit++){
                        //kon sa digit rakh skta hu,kaise pata chalega
                        //mujhe bas check krna hai ki, digit rakhna safe hai ki nahi
                        if(isSafe(digit,i,j,board)==true){
                            board[i][j]=digit;
                            //baaki recursion sambhalega
                            bool AageSolveHoPaya = solve(board);
                            if(AageSolveHoPaya == true){
                                //pura board solve ho gya
                                return true;
                            }
                            else{//ye wo case hai, jisme digit place kiye, par aage
                                //recursion ka answer false aaya
                                //aage board solve nahi ho paya
                                //backTrack -> shayad maine galat digit rakh diya
                                board[i][j]='.'; 
                            }
                        }
                    }
                    //agar aap yahan pahuch gye
                    //iska matlab 1->9 tak koi bhi digit yahan fit nahi ho raha
                    //peeche kahin par galti ki hai
                    return false;
                }

            }
        }
        //yahan aa gya,iska matlab
        //board completely fill ho gya hai
        //ans aa chuka hai
        return true; 
       
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
