#include<iostream>
#include<vector>
using namespace std;

int BS (vector<int> arr, int target, int start, int end) {
    if (start <= end) {
        int mid = start + (end - start) /2 ; 

        if (target > arr[mid])
            return BS(arr, target, mid+1, end ); //Recursion call
        
        else if (target < arr[mid])
            return BS(arr, target, start, mid-1); //Recursion call
        
        else 
            return mid;
    }
    return -1;
}

int main() {
    vector<int> arr = {-2, -1, 0, 2, 9, 81, 96, 101, 430, 540};
    int start =0, end = arr.size()-1;

    int target1= -1;
    int result= BS(arr, target1, start, end);

    // Corner case check
    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}