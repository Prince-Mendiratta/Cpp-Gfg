// { Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.

    //////////////////////////////////
    //////      APPROACH 1      //////
    //////////////////////////////////
    // Brute Force
    // Time Complexity -O(n^2)
    // Check sum of all possible subarrays and return if 0 found.
    // TLE!!!

    bool subArrayExists1(int arr[], int n)
    {
        //Your code here
        for(int i = 0; i < n; i++){
            int count = 0;
            for(int j = i; j < n; j++){
                count += arr[j];
                if(count == 0){
                    return true;
                }
            }
            
        }
        return false;
    }

    //////////////////////////////////
    //////      APPROACH 2      //////
    //////////////////////////////////
    // Kadane's Algo
    // Time Complexity -O(n)
    // Check sum of all possible subarrays and return if 0 found.
    // TLE!!!
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        for(int i = 0; i < n; i++){
            int count = 0;
            for(int j = i; j < n; j++){
                count += arr[j];
                if(count == 0){
                    return true;
                }
            }
            
        }
        return false;
    }
};

// { Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}  // } Driver Code Ends