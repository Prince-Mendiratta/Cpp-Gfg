// https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/
// https://practice.geeksforgeeks.org/problems/reverse-a-string/1
// https://leetcode.com/problems/reverse-string

//////////////////////////////////
//////      APPROACH 1      //////
//////////////////////////////////

// Time Complexity - O(n)
// Double Pointer iteration

#include <iostream>
using namespace std;

void reverseArray(int *A, int arr_size){
    int temp;
    int *begin = A, *end = A + (arr_size-1);
    for (int i = 0; i < (arr_size/2); i++) {
        temp = *begin;
        *begin = *end;
        *end = temp;
        begin++;
        end--;
    }
}

void Display(int *A, int arr_size){
    for (int i = 0; i < arr_size; i++) {
        cout<<A[i]<<" ";
    }
}

int main() {
    int arr[10] = {1,5,23,544,567,23,4523,76,43,12};
    int arr_size = 10;
    Display(arr, arr_size);
    cout<<endl;
    reverseArray(arr, arr_size);
    Display(arr, arr_size);
    return 0;
}