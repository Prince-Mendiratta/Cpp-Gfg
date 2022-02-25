// https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1
// https://www.geeksforgeeks.org/kth-smallestlargest-element-unsorted-array/

#include<bits/stdc++.h>
using namespace std;

//////////////////////////////////
//////      APPROACH 1      //////
//////////////////////////////////

// Time Complexity - O(n)
// Brute force
// Convert to vector and sort it

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        vector<int> vec;
        for(int i=l;i<=r;i++)
        {
            vec.push_back(arr[i]);
        }
        
        sort(vec.begin(),vec.end());
        // cout<<vec[k];
        return vec[k-1];
    }
};

