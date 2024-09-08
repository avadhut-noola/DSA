#include <iostream>
using namespace std;

int main()
{   
    int a = 10, b = 5;

    //Arithmetic Operators
    cout << "Sum = " << (a+b) <<endl;
    cout << "Difference = " << (a-b) <<endl;
    cout << "Product = " << (a*b) <<endl;
    cout << "Division = " << (a/b) <<endl;
    cout << "Modulo = " << (a%b) <<endl;


    //Relational Operators
    cout << (3<5) << endl; //true = 1
    cout << (3>5) << endl; //false = 0
    cout << (3<=5) << endl; //true = 1
    cout << (3>=5) << endl; //false = 0
    cout << (3==5) << endl; //false = 0
    cout << (3!=3) << endl; //false = 0
    cout << (3!=5) << endl; //true = 1

    cout<<"Logical Operators\n";
    cout << !(3<1) <<endl; // Reverse the answer
    cout << ( (3<1) || (5>3) ) <<endl; //True if any one condition is true
    cout << ( (3<1) && (5>3) ) <<endl; //True only if both conditions are true

    int n = 11;
    
    // Ternary Statement
    cout << ( n >= 0 ? "Positive Number" : "Negative Number");
    return 0;
}