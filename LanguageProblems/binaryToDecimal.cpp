#include<iostream>
using namespace std;

int binaryToDec(int bin) {
    int rem , ans=0 , pow=1; 

    while (bin > 0) {
        rem = bin % 10;
        ans += rem * pow;

        bin /= 10;
        pow *=2;
    } 
    return ans; //decimal form
}

int main() {
    int decimal;
    
    //User choice
    cout << "Enter decimal no: ";
    cin>> decimal;
    cout << "Binary Conversion: " << binaryToDec(decimal) << endl;

    return 0;
}