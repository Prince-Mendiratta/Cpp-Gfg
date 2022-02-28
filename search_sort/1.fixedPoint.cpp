// https://practice.geeksforgeeks.org/problems/value-equal-to-index-value1330/1#
// https://leetcode.com/problems/smallest-index-with-equal-value/

//////////////////////////////////
//////      APPROACH 1      //////
//////////////////////////////////

class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	vector<int> indices;
	    for(int i = 0; i < n; i++){
	        if(arr[i] == i+1){
	            indices.push_back(arr[i]);
	        }
	    }
	    return indices;
	}
};


