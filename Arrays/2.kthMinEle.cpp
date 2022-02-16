// https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1
// https://www.geeksforgeeks.org/kth-smallestlargest-element-unsorted-array/

// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

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

// { Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends

