#include<iostream>
using namespace std;

void reverseArray(int arr[], int size) {

    int start = 0, end = size -1;
    
    while (start < end) {
        swap(arr[start], arr[end]);
        start ++; end --;
    }
}

int main() {
    int arr [] = {4, 2, 7, 8, 90, 0};
    int size = 6;
    
    cout << "Defined Array: \n";
    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }

    reverseArray ( arr, size );
    
    cout << "\nReversed Array: \n";
    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }    
    return 0;
}