// https://practice.geeksforgeeks.org/problems/array-of-alternate-ve-and-ve-nos1401/1
// https://www.geeksforgeeks.org/rearrange-array-alternating-positive-negative-items-o1-extra-space/
// https://leetcode.com/problems/sort-array-by-parity/description/

#include <bits/stdc++.h>

using namespace std;
//////////////////////////////////
//////      APPROACH 1      //////
//////////////////////////////////
// Time complexity - O(n)
// Space Complexity - O(1)

class Solution{
public:
	void rearrange(int arr[], int n) {
	    // code here;
        vector<int> pos, neg;
	    for(int i = 0; i < n; i++){
	        if(arr[i] >= 0){
	            pos.push_back(arr[i]);
	        }else{
	            neg.push_back(arr[i]);
	        }
	    }
	    int p=0,ne=0,i=0;
	    while(i<n){
	        if(p!= pos.size()){
	            arr[i++] = pos[p++];
	        }
	        if(ne!=neg.size()){
	            arr[i++] = neg[ne++];
	        }
	    }
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}