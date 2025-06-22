//GFG Book Allocation problem(VVV Imp Ques)
//Logic: Binary Search in Search Space

class Solution {
  public:
    bool isPossibleSolution(vector<int> &arr, int n,int k,int mid)
    {
        int pagesum=0;
        int c=1;
        for(int i=0; i<n; i++)
        {
            if(arr[i] > mid)
                return false;
            else if(pagesum + arr[i] > mid)
            {
                c++;
                pagesum=arr[i];
                if(c> k)
                    return false;
            }
            else 
            pagesum += arr[i];
        }
        //yahan pahuch gye,matlab return true
        return true;
    }
  
    int findPages(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        if(k > n) return -1; 
        int s=0;
        int e=accumulate(arr.begin(),arr.end(),0);
        int ans=-1;
        while(s <= e)
        {
            int mid=s+(e-s)/2;
            if(isPossibleSolution(arr,n,k,mid))
            {
                ans=mid;
                e=mid-1;
            }
            else
              s=mid+1;
        }
        return ans;
        
    }
};
