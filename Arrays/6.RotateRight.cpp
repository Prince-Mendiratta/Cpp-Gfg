// https://www.geeksforgeeks.org/c-program-cyclically-rotate-array-one/
// https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1#


//////////////////////////////////
//////      APPROACH 1      //////
//////////////////////////////////

// Time Complexity - O(n)
// Standard way to rotate an array


#include <iostream>
using namespace std;

void rotateRight1(int *A, int arr_size){
    int temp;
    temp = A[arr_size-1];
    for (int i = arr_size-1; i > 0; i--) {
        A[i] = A[i-1];
    }
    A[0] = temp;
}

//////////////////////////////////
//////      APPROACH 2      //////
//////////////////////////////////

// Swap current and last value of array
void rotateRight2(int *nums, int arr_size){
  int i = 0, j = arr_size - 1;
  while (i != j) {
    swap(nums[i], nums[j]);
    i++;
  }
}

void Display(int *A, int arr_size){
    for (int i = 0; i < arr_size; i++) {
        cout<<A[i]<<" ";
    }
}

int main() {
    int arr_size = 5;
    int A[] = {1,2,3,4,5};
    Display(A, arr_size);
    cout<<endl;
    rotateRight1(A, arr_size);
    Display(A, arr_size);

    return 0;
}