//
//  main.cpp
//  recursion
//
//  Created by Sandeep sudula on 9/23/22.
//subsequences

#include<iostream>
#include<vector>
using namespace std;

bool fun(int i, int arr[], vector<int> &temp, int len, int sum, int count)
{
    if(i>=len)
    {
        if(count==sum)
        {
            for(auto it:temp)
            {
                cout<<it<<" ";
            }
            return true;
        }
        cout<<endl;
        return false;
    }
    temp.push_back(arr[i]);
    count+=arr[i];
    if (fun(i+1, arr, temp, len,sum,count)==true)
        return true;
    temp.pop_back();
    count-=arr[i];
    if (fun(i+1, arr, temp, len,sum,count)==true)
        return true;
    return false;
}

int main()
{
    int arr[]={3,1,2};
    vector<int> n;
    int i=0,j=0;
    int len=sizeof(arr)/sizeof(int);
    int sum=5;
    fun(i,arr,n,len,sum,j);
}
