// https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1
// https://www.geeksforgeeks.org/find-union-and-intersection-of-two-unsorted-arrays/
// https://leetcode.com/problems/intersection-of-two-arrays/
// https://leetcode.com/problems/intersection-of-two-arrays-ii/

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    //////////////////////////////////
    //////      APPROACH 1      //////
    //////////////////////////////////

    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int count = 0;
        int arr[m+n];
        if(n < m){
            for (int i = 0; i < n; i++) {
                bool flag = true;
                for (int j = 0; j < m; j++) {
                    if(a[i] == b[j]) {
                        flag = false;
                        break;
                    }
                }
                if(flag) {
                    
                }
            }
        }else{
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    
                }
            }
        }
    }
};