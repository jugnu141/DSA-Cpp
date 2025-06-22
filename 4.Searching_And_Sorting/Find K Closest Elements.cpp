//LEETCODE #658 problem link:https://leetcode.com/problems/find-k-closest-elements/
//Logic: Binary Search, Two Pointer approach
class Solution {
public:
    int LowerBound(vector<int>& arr, int x)
    {
        int s=0;
        int e=arr.size()-1;
        //int ans=-1; 1 test case failed, DRY RUN
        int ans=-1;
        while(s <= e)
        {
            int mid=(s+e)/2;
            if(arr[mid] >= x)
            {
                ans=mid;
                e=mid-1;
            }
            else if(x > arr[mid])
                s=mid+1;
        }
        return ans;
    }


    vector<int> BinarySearch(vector<int>& arr, int k, int x)
    {
        //lower bound
        int h=LowerBound(arr,x);
        int l=h-1;
        while(k--)
        {
            if(l<0) //DRY run to understand
                h++;
            else if(h >= arr.size()) //DRY Run
                l--;
            else if(x-arr[l] > arr[h]-x)
                h++;//jidhar chota difference, usko right move
            else //jidhar bada differece,usko left move
                l--;
        }
        return vector<int>(arr.begin()+l+1,arr.begin()+h);
    }

    vector<int> twoPointer(vector<int>& arr, int k, int x)
    {
        int l=0; int h=arr.size()-1;
        while(h-l >= k)
        {
            if(x-arr[l] > arr[h]-x)
                l++;
            else
                h--;
        }
        vector<int> ans;
        for(int i=l; i<=h; i++)
        {
            ans.push_back(arr[i]);
        }
        return ans;
    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
       //return twoPointer(arr,k,x); 
       return BinarySearch(arr,k,x);
    }
};
