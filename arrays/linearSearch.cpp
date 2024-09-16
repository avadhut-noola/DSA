#include<iostream>
using namespace std;

int linear(int arr[], int size, int target) {

    for ( int i=0; i<size; i++ ) {
        if ( arr[i] == target ) { // FOUND
            cout<< "Element found at index: " <<  i <<endl;
            return i;
        } 
    }
    return -1; //NOT FOUND
}

int main() {
    int arr [] = {85, 30, 90, 7, 60, 80};
    int size = 6 , target;
    
    //Input from user
    cout << "Enter element to be searched: ";
    cin >> target;

    int result = linear(arr, size, target);
    
    if (result == -1) {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}