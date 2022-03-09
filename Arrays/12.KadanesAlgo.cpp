// https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
// https://leetcode.com/problems/maximum-subarray/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
  //////////////////////////////////
  //////      APPROACH 1      //////
  //////////////////////////////////
  // Brute Force
  // Time Complexity -O(n^2)
  // Check sum of all possible subarrays and return max sum

  long long maxSubarraySum(int arr[], int n) {
    // Your code here
    int max = arr[0];
    for (int i = 0; i < n; i++) {
      int curr = 0;
      for (int j = i; j < n; j++) {
        curr += arr[j];
        if (curr > max) {
          max = curr;
        }
      }
    }
    return max;
  }

  //////////////////////////////////
  //////      APPROACH 2      //////
  //////////////////////////////////
  // Time Complexity - O(n)
  // Kadane's Algo
  // Reset subarray once sum goes negative.

  long long maxSubarraySum2(int arr[], int n) {
    // Your code here
    int max = arr[0];
    int curr = 0;
    for (int i = 0; i < n; i++) {
      curr += arr[i];
      if (curr > max) {
        max = curr;
      }
      if (curr < 0) {
        curr = 0;
      }
    }
    return max;
  }
};

// { Driver Code Starts.

int main() {
  int t, n;

  cin >> t;   // input testcases
  while (t--) // while testcases exist
  {

    cin >> n; // input size of array

    int a[n];

    for (int i = 0; i < n; i++)
      cin >> a[i]; // inputting elements of array

    Solution ob;

    cout << ob.maxSubarraySum(a, n) << endl;
  }
}
// } Driver Code Ends