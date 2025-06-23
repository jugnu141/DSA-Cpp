#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int singlenumber(vector<int> &nums)
{
    unordered_map<int,int>freqmap;
    //add frqs to the map/table
    for(int i=0; i<nums.size(); i++)
    {
        int num=nums[i];
        freqmap[num]=freqmap[num]+1;
        //freqmap[num]=0 in starting for a particular key num, 
        //kyuki,num key ke,corresponding koi
        //starting value nahi hai 
    }
    
    //print key and its frequency
    unordered_map<int,int>::iterator it2;
    cout<<"Map has below things"<<endl;
    for(it2=freqmap.begin(); it2 != freqmap.end(); it2++)
    {
        int key = it2->first;
        int freq= it2->second;
        cout<<"key = "<<key<<" Frequency = "<<freq<<endl;
    }

    //make iterator
    unordered_map<int,int>::iterator it;
    int ans=0;
    for(it=freqmap.begin(); it != freqmap.end(); it++)
    {
        int key = it->first;
        int freq= it->second;
        if(freq==1)
        {
            ans=key;
            break; //coming out of loop
        }
    }
    return ans;
}

int main()
{
    vector<int>nums={1,2,3,2,1,4,4};
    int ans=singlenumber(nums);
    cout<<"Single number is = "<<ans;
    return 0;
}