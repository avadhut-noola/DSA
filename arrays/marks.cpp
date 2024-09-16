#include<iostream>
using namespace std;

int main() {
    int size = 5;
    int marks [size] = {99, 100, 54, 36, 88};

    //Input elements in an array
    cout << "Enter marks in array: ";
    for (int i=0; i<size; i++) {
        cin >> marks [i];
    }

    // Retrieving size of array by datatype.
    cout << "Array size= " << sizeof(marks) /sizeof(int) <<endl;

    //Printing the array
    cout << "Array elements: \n";
    for (int i=0; i<size; i++ ) {
        cout << marks [i] << endl;
    }
    return 0;
}