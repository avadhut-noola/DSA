#include<iostream>
using namespace std;

void changeArr (int arr[], int size) {

    //Double the array values

    for (int i=0; i<size; i++) {
        arr[i] = 2* arr [i];
    }
}

int main() {
    int arr [] = {1, 2, 3};

    changeArr(arr,3); //PassByReference

    //Print the array
    for (int i=0; i<3; i++) {
        cout << arr[i] <<endl ;
    }
    return 0;
}