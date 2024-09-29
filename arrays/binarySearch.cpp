#include<iostream>
#include<vector>

using namespace std;

int binarySearch (vector<int> arr, int target) {
    int start =0 , end = arr.size()-1;

    while (start <= end) {
        //To avoid INT size overflow we are performing end-start
        int mid = start+ (end - start) / 2; // Optimization for mid calculation
        
        if (target > arr[mid]) {
            start = mid + 1;
        } else if (target < arr[mid]) {
            end = mid - 1;
        } else {
            return mid;
        }
    }   
    return -1; // Not found
}

int main() {
    vector<int> arr1 = {-2, -1, 0 , 1, 2, 5, 9, 20, 32, 96}; //Even size
    vector<int> arr2 = {-2, -1, 0 , 1, 2, 9, 20, 32, 96}; //Odd size

    int target1 = 96, target2 = 9, target3= 101;
    cout << binarySearch(arr1, target1) << endl;
    cout << binarySearch(arr2, target2) << endl;
    cout << binarySearch(arr2, target3) << endl; // Not found
    
    return 0;
}