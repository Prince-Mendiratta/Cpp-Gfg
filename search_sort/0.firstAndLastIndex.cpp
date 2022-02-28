// https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1
// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array

#include<bits/stdc++.h>
using namespace std;

//////////////////////////////////
//////      APPROACH 1      //////
//////////////////////////////////
vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> indices{-1,-1};
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            if(indices[0] == -1){
                indices[0] = i;
            }
            indices[1] = i;
        }
    }
    return indices;
}