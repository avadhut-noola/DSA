#include<iostream>
using namespace std;


/* void change(int* ptrA) { //Pass by ref using pointer
    *ptrA = 20;
} */

void change(int &b) { //Pass by ref using alias
    b = 20;
}

int main() {
    int a = 10;

    change(a);
    cout << "Value changed = " << a << endl; //alias check

    int* ptrA= &a;

    float price = 100.59;
    float* ptrP = &price;

    cout << "Address of a: " << ptrA << " Value at a: " << *(ptrA) << endl; 
    cout<< "Address of price: " << ptrP << " Value at price: " << *(ptrP) << endl;
    
    //Pointer-to-pointer variable
    int** ptr = &ptrA;
    cout << "Address of Pointer A: " << ptr <<endl;

    //Array pointer
    int arr[] = {1, 2, 3, 4, 5};

    cout << arr <<endl;
    cout << *arr << endl;

    int* p = &a;
    cout << p << endl;
    p --;    //Pointer increment  
    cout << p << endl;

    //Practice Q2
    int arr1[] = {10, 20, 30 , 40};
    int* ptr = arr1;

    cout << *(ptr + 1) << endl; 
    cout << *(ptr + 3) << endl;
    ptr ++;
    cout << *ptr << endl;
    return 0;
}