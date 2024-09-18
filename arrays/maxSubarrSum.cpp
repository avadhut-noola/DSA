#include<iostream>
using namespace std;

int main() {

    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    // int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    // int size = 7;    
    
    //BruteForce approach to print subarrays
    for( int strt=0; strt < size; strt++ ) {
        for ( int end= strt; end < size; end ++) {
            
            for ( int i = strt; i<=end; i++ ) {
                cout << arr [i];
            }
            cout << " ";
        }
        cout << endl;
    }


    int maxSum = INT32_MIN;
    //Maximum subarr sum
    for( int strt=0; strt < size; strt++ ){
        int currSum = 0;
        for ( int end= strt; end < size; end ++) {
            currSum += arr[end];
            maxSum = max ( currSum , maxSum );
        }
    }    

    cout << "Maximum subarray sum = " << maxSum; 
    return 0;
}