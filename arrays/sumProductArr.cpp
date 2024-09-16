#include<iostream>
using namespace std;

int main() {
    int arr [] = {10, 3, 32, 2, 5};
    int size= 5;
    int sum=0, prod=1;
    
    // Sum & Product of numbers in array
    for (int i=0; i<size; i++ ) {
        sum+=arr[i];
        prod*=arr[i];
    }

    cout << "Sum of numbers in array: " << sum << endl;
    cout << "Product of numbers in array: " << prod << endl;

    return 0;
}