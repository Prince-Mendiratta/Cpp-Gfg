// https://practice.geeksforgeeks.org/problems/count-squares3649/1#

//////////////////////////////////
//////      APPROACH 1      //////
//////////////////////////////////

class Solution {
  public:
    int countSquares(int N) {
        // code here
        float root = sqrt(N);
        int rootInt = root;
        if(root - rootInt > 0){
            return rootInt;
        }
        return rootInt-1;
    }
};