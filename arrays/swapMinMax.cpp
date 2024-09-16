#include<iostream>
using namespace std;

int main() {
    
    int nums [] = {5, 15, 22, 1, -15, 24 };
    int size = 6;

    int smallest = INT32_MAX;
    int largest = INT32_MIN;
    int smallIndex, largeIndex;

    //Smallest & largest no: 
    for (int i=0; i<size; i++) {
        //Using Predefined function:
        smallest= min (nums[i], smallest);
        largest= max (nums [i], largest);
    }
    
    //Index of numbers
    for (int i=0; i<size; i++) {
        if(smallest == nums[i]) {
                smallIndex = i;                
            }
        if(largest == nums[i]) {
                largeIndex = i;
            }            
    }

    //Swapping min and max
    cout << "\nBefore swapping min & max: " <<endl;

    for (int j=0; j<size; j++) {
        cout << nums[j] << " ";
    }   cout << endl;

    swap(nums[smallIndex], nums[largeIndex]);
    cout << "After swapping min & max: " <<endl;
    
    for (int j=0; j<size; j++) {
        cout << nums[j] << " ";
    }        
    return 0;
}