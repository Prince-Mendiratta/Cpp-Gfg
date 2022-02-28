// https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1
// https://www.geeksforgeeks.org/find-union-and-intersection-of-two-unsorted-arrays/
// https://leetcode.com/problems/intersection-of-two-arrays/
// https://leetcode.com/problems/intersection-of-two-arrays-ii/

#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
  // Function to return the count of number of elements in union of two arrays.
  //////////////////////////////////
  //////      APPROACH 1      //////
  //////////////////////////////////
  // Using Set

  int doUnion1(int a[], int n, int b[], int m) {
    // code here
    set<int> s;
    for (int i = 0; i < n; i++) {
      s.insert(a[i]);
    }

    for (int i = 0; i < m; i++) {
      s.insert(b[i]);
    }

    return s.size();
  }

  //////////////////////////////////
  //////      APPROACH 2      //////
  //////////////////////////////////
  // Bruteforce for Union
  // TLE!!!
  // O(mn)

  int doUnion2(int a[], int n, int b[], int m) {
    // code here
    vector<int> U;
    for (int i = 0; i < n; i++) {
      U.push_back(a[i]);
    }

    for (int i = 0; i < m; i++) {
      bool flag = false;
      for (int j = 0; j < n; j++) {
        if (b[i] == a[j]) {
          flag = true;
          break;
        }
      }
      if (flag) {
        continue;
      } else {
        U.push_back(b[i]);
      }
    }

    return U.size();
  };
};