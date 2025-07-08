//https://www.geeksforgeeks.org/problems/common-elements1132/1

class Solution {
  public:
    // Function to find common elements in three arrays.
    
    vector<int> RemoveDuplicates(vector<int>&arr)
    {
       //Sorting Method
       int n=arr.size();
       vector<int>arrayFinal;
       sort(arr.begin(),arr.end());
       for(int i=0; i<n-1; i++)
        {
            if(arr[i] != arr[i+1])
              arrayFinal.push_back(arr[i]); 
        }
         arrayFinal.push_back(arr[n-1]); 
         return arrayFinal;
    }
    
    vector<int> MappingMethod(vector<int> &a1, vector<int> &a2,
                               vector<int> &a3)
    {
        unordered_map<int,int>map;
        vector<int>ans;
        for(int i=0; i<a1.size(); i++)
            map[a1[i]]++;
        for(int i=0; i<a2.size(); i++)
            map[a2[i]]++;
        for(int i=0; i<a3.size(); i++)
            map[a3[i]]++;
            
        for(auto it=map.begin(); it != map.end(); it++)
        {
            if(it->second == 3)
                ans.push_back(it->first);
        }
        sort(ans.begin(),ans.end());
         return ans; 
    }
    
       
       vector<int> MyMethod(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3){ 
        //steps to solve:
        //1.Remove Duplicates From Each Array
        //2.Use Mapping to find common elements
       vector<int>a1,a2,a3;
       a1=RemoveDuplicates(arr1); //Order Not Mainatined after removal
        //Use unordered_Set For Better Duplicate Removal
       a2=RemoveDuplicates(arr2);
       a3=RemoveDuplicates(arr3);
       return MappingMethod(a1,a2,a3);
    }
    
    vector<int> LoopingMethod(vector<int> &a1, vector<int> &a2,
                               vector<int> &a3)
    {
        vector<int>ans;
        set<int>st;
        int i,j,k;
        i=j=k=0;
        while(i<a1.size() && j<a2.size() && k<a3.size())
        {
            if(a1[i]==a2[j] && a2[j]==a3[k])
            {
                //ans.push_back(a1[i]); //store duplicate common elements
                st.insert(a1[i]); //Set Store Unique Elements
                i++;
                j++;
                k++;
            }
            else if(a1[i] < a2[j])
                i++;
            else if(a2[j] < a3[k])
                j++;
            else
                k++;
        }
        for(auto i : st)
            ans.push_back(i);
            
        return ans;
    }
    
    
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3){ 
        //return MyMethod(arr1,arr2,arr3);
            //Duplicate Remove + Mapping Method
        
        return LoopingMethod(arr1,arr2,arr3);
            //Use of set and While Loop
        
        //another Method without using Set
        
    }
};
