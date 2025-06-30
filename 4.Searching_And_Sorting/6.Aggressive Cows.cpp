//GFG https://www.geeksforgeeks.org/problems/aggressive-cows/1
//Binary Search
class Solution {
  public:
    bool isPossibleSoln(vector<int> &stalls,int n,int k,int mid)
    {
        //can we place k cows,with atleast 'mid' distance 
        //between any two cow
        int c=1;
        int pos=stalls[0];
        for(int i=0; i<n; i++)
        {
            if(stalls[i]-pos >= mid) //atleast mid distance
            {
                c++;
                pos=stalls[i];//one more cow has been placed
            }
            if(c==k)
                return true;
        }
        return false;
    }

    int aggressiveCows(vector<int> &stalls, int k) {
        //sort the array of stalls
        sort(stalls.begin(),stalls.end());
        int n=stalls.size();
        int s=0;
        int e=stalls[n-1]-stalls[0]; //final_pos - start_pos 
        int ans=-1;
        while(s<= e)
        {
            int mid=s + (e-s)/2;
            if(isPossibleSoln(stalls,n,k,mid))
            {
                ans=mid; //store
                s=mid+1; //move right to maximize answer
            }
            else
                e=mid-1; //move left
        }
        return ans;
    }
};
