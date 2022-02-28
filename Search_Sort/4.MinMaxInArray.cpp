// https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/
// https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1/
// https://leetcode.com/problems/reverse-string

//////////////////////////////////
//////      APPROACH 1      //////
//////////////////////////////////

// Linear Search
// Time Complexity - O(n)

#include <cstdint>
#include <iostream>
using namespace std;

struct Pair {
    int max;
    int min;
    void displayExtremes(){
        cout<<"Max is: "<<max<<endl;
        cout<<"Min is: "<<min<<endl;
    }
};

/*
Pair getExtremeties(int *A){
    Pair extremes;
    extremes.max = INT32_MIN;
    extremes.min = INT32_MAX;
    for (int i = 0; i < 5; i++) {
        if(A[i] > extremes.max){
            extremes.max = A[i];
        }
        if(A[i] < extremes.min){
            extremes.min = A[i];
        }
    }
    return extremes;
}

int main(){
    int *p = new int[5];
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;

    Pair out = getExtremeties(p);

    out.displayExtremes();

    return 0;
}
*/

//////////////////////////////////
//////      APPROACH 2      //////
//////////////////////////////////

// Recursion
// Divide and Conquer
// hmm
// Time Complexity - O(n)
// the approach does 3n/2 -2 comparisons if n is a power of 2. And it does more than 3n/2 -2 comparisons if n is not a power of 2.


// Pair getExtremeties(int *A, int begin, int end) {
//     cout<< "run ";
//     Pair extremes;
//     if(begin == end){
//         extremes.max = A[begin];
//         extremes.min = A[begin];
//         return extremes;
//     }
//     if(begin == end -1){
//         if(A[begin] > A[end]){
//             extremes.max = A[begin];
//             extremes.min = A[end];
//             return extremes;
//         }else{
//             extremes.max = A[end];
//             extremes.min = A[begin];
//             return extremes;
//         }
//     }

//     int mid = (begin+end)/2;
//     Pair extremesLeft = getExtremeties(A, begin, mid);
//     Pair extremesRight = getExtremeties(A, mid+1, end);

//     if(extremesLeft.min < extremesRight.min){
//         extremes.min = extremesLeft.min;
//     }else{
//         extremes.min = extremesRight.min;
//     }

//     if(extremesLeft.max > extremesRight.max){
//         extremes.max = extremesLeft.max;
//     }else{
//         extremes.max = extremesRight.max;
//     }

//     return extremes;
// };

// int main() {
//     int A[] = {1,2,3,4,5,6};

//     Pair out = getExtremeties(A, 0, 5);

//     out.displayExtremes();
//     // int a = 0, b = 3;
//     // cout<<(a+b)/2;

//     return 0;
// }


//////////////////////////////////
//////      APPROACH 3      //////
//////////////////////////////////

// Compare in Pairs
// hmm
// Time Complexity O(n)
// the approach does 3n/2 -2 comparisons if n is a power of 2. And it does 3*(n-1)/2 comparisons if n is not a power of 2.

Pair getExtremeties(int *A, int n){
    Pair extremes;
    int i;
    if(n % 2 == 0){
        if(A[0] > A[1]){
            extremes.max = A[0];
            extremes.min = A[1];
        }else{
            extremes.max = A[1];
            extremes.min = A[0];
        }
        i = 2;
    }else{
        extremes.max = A[0];
        extremes.min = A[0];
        i = 1;
    }

    while(i <= n){
        if(A[i] > A[i+1]){
            if(A[i] > extremes.max) extremes.max = A[i];
            if(A[i+1] < extremes.min) extremes.min = A[i+1];
        }else{
            if(A[i+1] > extremes.max) extremes.max = A[i];
            if(A[i] < extremes.min) extremes.min = A[i];
        }
        i+=2;
    }

    return extremes;
};

int main(){

    int arr[] = {1,2,3,4,5};
    int arr_size = 5;

    Pair oo = getExtremeties(arr, arr_size - 1);
    oo.displayExtremes();

    return 0;
}