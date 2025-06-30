//https://www.spoj.com/problems/PRATA/
//Binary Search
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossibleSolution(vector<int>&cooksRanks, int nP, int mid)
{
    int currP=0; //initial cooked prata count
    for(int i=0; i<cooksRanks.size(); i++)
    {
        int R=cooksRanks[i];
        int j=1;
        int timeTaken=0;
        while(true)
        {
            if(timeTaken + j*R <= mid)
            {
                currP++;
                timeTaken += j*R;
                j++;
            }
            else
                break;
        }
        if(currP >= nP)
            return true;
    }
    return false;

}

int minTimeToCompleteOrder(vector<int>&cooksRanks, int nP)
{
    int s=0;
    int highestRank=*max_element(cooksRanks.begin(), cooksRanks.end());
    int e=highestRank* ((nP * (nP+1))/2);
    //most inefficient cook ka total time
    int ans=-1;
    while(s <= e)
    {
        int mid= s+ (e-s)/2;
        if(isPossibleSolution(cooksRanks, nP, mid))
        {
            ans=mid; //store in answer
            e=mid-1; //to find the minimum time
        }
        else 
            s=mid+1;
    }
    return ans;
}

int main()
{
    int T; cin>>T; // T is number of test cases
    while(T--){
        int nP, nC;
        // nP-> no of prata, nC-> no of cooks
        cin>>nP>>nC;
        vector<int>cooksRanks;
        while(nC--){
            int R; cin>>R; // R is rank
            cooksRanks.push_back(R);
        }
        cout<<minTimeToCompleteOrder(cooksRanks, nP)<<endl;
    }
    return 0;
}
