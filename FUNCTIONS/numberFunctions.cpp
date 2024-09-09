#include<iostream>
using namespace std;

//Sum of 2
int sum(int a, int b) {
    return (a+b);
}

//Minimum of 2
int minOfTwo(int a, int b) {
    
    if(a<b){
        return a;
    } else { 
        return b; 
    }
    
}

int main() {
    //Sum Function invoked here
    cout << "Sum of numbers= " << sum(11,11) <<endl;

    //Min Function invoked here
    cout << "Smaller Number= " << min(1,101) <<endl;
    return 0;
}