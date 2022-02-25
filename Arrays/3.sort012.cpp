// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
// https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/
// https://leetcode.com/problems/sort-colors/

#include <iostream>
using namespace std;

//////////////////////////////////
//////      APPROACH 1      //////
//////////////////////////////////

// Time Complexity - O(n)
// Simple Solution
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int ones = 0;
        int twos = 0;
        for (int i = 0; i < n; i++) {
            if(a[i] == 1) ones++;
            else if(a[i] == 2) twos++;
        }
        // Approach 1
        for (int i = 0; i < n; i++) {
            if (i < (n - (ones + twos))) a[i] = 0;
            else if (i < (n - twos)) a[i] = 1;
            else a[i] = 2;
        }
        // Approach 2
        int zeros = n - (ones+twos);
        int x = 0;
        while(zeros--){
            a[x] = 0;
            x++;
        }
        while(ones--){
            a[x] = 1;
            x++;
        }
        while(twos--){
            a[x] = 2;
            x++;
        }
    }
    
};