//
//  main.cpp
//  recursion
//
//  Created by Sandeep sudula on 9/23/22.
//print combination sum

#include<iostream>
#include<vector>
using namespace std;

void fun(int i, int arr[], vector<int> &temp, int len, int sum, int count)
{
    if(count>sum)
    {
        return;
    }
    if(i==len)
    {
        if(count!=sum) return;
    }
    if(count==sum)
    {
        for(auto it:temp)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    temp.push_back(arr[i]);
    count+=arr[i];
    fun(i, arr, temp, len,sum,count);
    temp.pop_back();
    count-=arr[i];
    fun(i+1, arr, temp, len,sum,count);
    return;
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
