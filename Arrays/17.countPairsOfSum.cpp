// https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1
// https://www.geeksforgeeks.org/count-pairs-with-given-sum/

#include <array>
#include <bits/stdc++.h>
using namespace std;

//////////////////////////////////
//////      APPROACH 1      //////
//////////////////////////////////
// Bruteforce
// Complexity - O(n^2)
// TLE!!

// class Solution{   
// public:
//     int getPairsCount(int arr[], int n, int k) {
//         // code here
//         int count = 0;
//         for (int i = 0; i < n; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 if(arr[i] + arr[j] == k){
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };

//////////////////////////////////
//////      APPROACH 2      //////
//////////////////////////////////
// Sort the array
// Take two pointers, one from left, one from right. Add the left and right and check if sum is equal, greater or smaller.
// If equal, count++ and check sum for all elements till right then, right--. If sum is smaller, left++. Else, right--.

// Time complexity - O(nlogn)
class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        quickSort(arr, 0, n-1);
        int i = 0, j = n - 1;
        int count = 0;
        while(i < j){
            if(arr[i] + arr[j] == k){
                count++;
                int m=i+1;
                while(m<j && (arr[m]+arr[j]) == k){
                    count++;
                    m++;
                }
                j--;
            }else if(arr[i] + arr[j] < k){
                i++;
            }else{
                j--;
            }
        }
        return count;
    }

    void swap(int *a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    int partition(int arr[], int low, int high){
        int pivot = arr[high];
        int i = (low - 1);
        for (int j = low; j <= high - 1; j++) {
            if(arr[j] < pivot){
                i++;
                swap(&arr[i], &arr[j]);
            }
        }
        swap(&arr[i+1], &arr[high]);
        return (i+1);
    }

    void quickSort(int arr[], int low, int high){
        if(low < high){
            int pi = partition(arr, low, high);

            quickSort(arr, low, pi-1);
            quickSort(arr, pi+1, high);
        }
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}