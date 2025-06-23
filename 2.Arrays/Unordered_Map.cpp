#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<int,int>desk_map;//<roll_no desk_no>

    //insertion
    desk_map[1]=53; //desk map ki 1 key par,53 desk no assign kar diya
    desk_map[2]=54;
    desk_map[3]=55;

    desk_map[2]=57; //reassign because key 2 was already there

    //iterate
    //i have to iterate over 3 entries
    //map me iterate karne ke liye , make an iterator
    unordered_map<int,int>::iterator it;
    //syntax to  access each entry in map
    for(it =desk_map.begin(); it != desk_map.end(); it++ )
    //.end() means, (Last + 1)th block
    //.end() doesnt doesnt mean its the last element 
    {
        int key=it->first; //synatx
        int value=it->second;
        cout<<"Key = "<<key<<" "<<"Value = "<<value<<endl;
    }
    
    //find ? //table/map bahut fast 
    //average case complexity is O(1)
    //2 is key
    if(desk_map.find(2) !=desk_map.end()) //finding key 2 
    {
        int value=desk_map[2]; //value of key 2
        cout<<"Value of key 2 is = "<<value<<endl;
    }
    else
    {
        //not found
        cout<<"Key is not found"<<endl;

    }

    //deletion
    //key se hi hota hai
    desk_map.erase(2); //key 2 got deleted 

    cout<<"After deletion:"<<endl;
    for(it =desk_map.begin(); it != desk_map.end(); it++ )
    {
        int key=it->first; //synatx
        int value=it->second;
        cout<<"Key = "<<key<<" "<<"Value = "<<value<<endl;
    }
    
    cout<<"Check if key 2 is availble or not"<<endl;
    if(desk_map.find(2) != desk_map.end())
    {
        cout<<"Key 2 is available"<<endl;

    }
    else
    {
        cout<<"Key 2 is not available"<<endl;
    }

    return 0;
}