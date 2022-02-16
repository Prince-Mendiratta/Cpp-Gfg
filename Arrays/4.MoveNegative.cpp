// https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/

#include <iostream>
using namespace std;
#include <bits/stdc++.h>

//////////////////////////////////
//////      APPROACH 1      //////
//////////////////////////////////

// Time Complexity - O(n)
// Double Pointer iteration

int main() {
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int arr_size = 9;
    int *i = arr,*j = arr + (arr_size-1), temp;
    bool f1, f2;

    while (i < j) {
        if (*i > 0) {
            f1 = true;
        }else{
            f1 = false;
            i++;
        }
        if(*j < 0){
            f2 = true;
        }else {
            f2 = false;
            j--;
        }
        if(f1 && f2){
            temp = *i;
            *i = *j;
            *j = temp;
            i++;
            j--;
        }
    }
    for (int i = 0; i < arr_size; i++) {
        cout<<arr[i]<<" ";
    }
}