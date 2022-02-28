// https://practice.geeksforgeeks.org/problems/common-elements1132/1#
// https://www.geeksforgeeks.org/find-common-elements-three-sorted-arrays/

#include <bits/stdc++.h>
#include <unordered_map>
#include <utility>
#include <vector>
using namespace std;

//////////////////////////////////
//////      APPROACH 1      //////
//////////////////////////////////
// Bruteforce
// HashTable
// Time - O(n1+n2+n3)
// Space - O(n1+n2+n3)

class Solution
{
    public:
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            unordered_map<int, int> m1;
            unordered_map<int, int> m2;
            unordered_map<int, int> m3;

            vector<int> res;

            for (int i = 0; i < n1; i++) {
                m1[A[i]]++;
            }
            for (int i = 0; i < n2; i++) {
                m2[B[i]]++;
            }
            for (int i = 0; i < n3; i++) {
                m3[C[i]]++;
            }

            int* x = n1 < n2 ? (n1 < n3 ? A : C) : (n2 < n3 ? B : C);
            int y = n1 < n2 ? (n1 < n3 ? n1 : n3) : (n2 < n3 ? n2 : n3);

            for(int i = 0; i < y; i++){
                int m = x[i];
                if(m1[m] > 0 && m2[m] > 0 && m3[m] > 0){
                    res.push_back(m);
                    // To avoid dups
                    m1[m] = 0;
                }
            }
            return res;
        }
};

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}