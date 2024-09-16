#include<iostream>
using namespace std;

int main() {
    
    int nums [] = {5, 15, 22, 1, -15, 24 };
    int size = 6;

    int smallest = INT32_MAX;
    int largest = INT32_MIN;

    //Smallest & largest no: 

    for (int i=0; i<size; i++) {
        //Using Predefined function:
        smallest= min (nums[i], smallest);
        largest= max (nums [i], largest);

        // if(nums[i] < smallest) {smallest = nums[i];}
    }
    cout << "Smallest No: " << smallest <<endl;
    cout << "Largest No: " << largest <<endl; 
    
    
    //Index of numbers
        for (int i=0; i<size; i++) {
            
            if(smallest == nums[i]) {
                cout << "\nSmallest No Index: " << i <<endl; 
            }

            if(largest == nums[i]) {
                cout << "Largest No Index: " << i <<endl; 
            }            
    } 
    return 0;
}