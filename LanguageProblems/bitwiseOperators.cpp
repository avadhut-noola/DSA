#include<iostream>
using namespace std;

int main() {
    int a =4, b=8;

    cout << "Bitwise & : " << (a & b) <<endl;
    
    cout << "Bitwise | : " << (a | b) <<endl;
    
    cout << "Bitwise ^ : " << (a ^ b) <<endl;

    //Bitwise left-shift
    cout << (10 << 2) <<endl;

    //Bitwise right-shift
    cout << (10 >> 1) <<endl;
    cout << (8 >> 2) <<endl;

    cout << "\nHomework: " << endl; // Homework

    int c =6, d=10;

    cout << "Bitwise & : " << (c & d) <<endl;
    
    cout << "Bitwise | : " << (c | d) <<endl;
    
    cout << "Bitwise ^ : " << (c ^ d) <<endl;

    //Bitwise left-shift
    cout << (10 << 2) <<endl;

    //Bitwise right-shift
    cout << (10 >> 1) <<endl;
    return 0;
}