// https://www.geeksforgeeks.org/union-and-intersection-of-two-sorted-arrays-2/
// https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1

#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
  // Function to return the count of number of elements in union of two arrays.
  //////////////////////////////////
  //////      APPROACH 1      //////
  //////////////////////////////////
  // Distinct Sorted Arrays

  int doUnion1(int a[], int n, int b[], int m) {
    sort(a, a + n);
    sort(b, b + m);
    int *p = a;
    int *q = b;
    vector<int> U;
    if (n < m) {
      for (int i = 0; i < n; i++) {
        if (*p < *q) {
          U.push_back(*p);
          p++;
        } else if (*p == *q) {
          U.push_back(*p);
          q++;
          p++;
        } else {
          U.push_back(*q);
          q++;
        }
      }
      q++;
      while (q < b + m) {
        U.push_back(*q);
        q++;
      }
    } else {
      for (int i = 0; i < m; i++) {
        if (*p < *q) {
          U.push_back(*p);
          p++;
        } else if (*p == *q) {
          U.push_back(*p);
          q++;
          p++;
        } else {
          U.push_back(*q);
          q++;
        }
      }
      p++;
      while (p < a + n) {
        U.push_back(*p);
        p++;
      }
    }
    for (int i = 0; i<U.size(); i++) {
        cout<<U[i];
    }
    return U.size();
  };
};