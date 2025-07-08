//https://www.geeksforgeeks.org/problems/merge-sort/1

class Solution {
  public:
    void MergeArray(vector<int>& arr, int s, int e,int mid)
    {
        
        //Merge Sorting is InPlace Sorting,
        //Dont use any other 
        //copy elements into left and right array
        //first create left and right array
        int leftlength=mid-s+1;
        int rightlength=e-(mid+1)+1;
        
        //use static or dynamic memory for left and right array creation
        int left[leftlength]={0};
        int right[rightlength]={0};
        
        //fill or copy elements into left and right array
        // s,e,mid index are here for divided left and right array
        //we will copy from original array,using these indexes
        int index=s;
        for(int i=0; i<leftlength; i++) //copying in left array
            left[i]=arr[index++];
        for(int i=0; i<rightlength; i++) //copying in right array
            right[i]=arr[index++];
        
        //Merge left and right array
        //Merge Logic
        int i=0; //for left array
        int j=0; //for right array
        int mainArrayIndex=s; //In place Sorting from left and right array
        while(i < leftlength && j < rightlength )
        {
            if(left[i] < right[j])
                arr[mainArrayIndex++]=left[i++];
            else
            arr[mainArrayIndex++]=right[j++];
        }
        //case-1--> left array me still elements bache hue haii
        while(i < leftlength){
        arr[mainArrayIndex++]=left[i++];
        }
        //case-2--> right array me still elements bache hue hai
         while(j < rightlength){
        arr[mainArrayIndex++]=right[j++];
        }
        
    }
  
    void DivideConquer(vector<int>& arr, int s, int e)
    {
        //base case
        if(s >= e) //invalid index or Single Element
            return;
        
        //divide into left and right array
        //By Applying Binary Search
        int mid=s+(e-s)/2;
        //left part
        DivideConquer(arr,s,mid);
        //right part
        DivideConquer(arr,mid+1,e);
        MergeArray(arr,s,e,mid);
    }
  
    void mergeSort(vector<int>& arr, int l, int r) {
       DivideConquer(arr,l,r); //T.C: O(nlogn)
        
    }
};
