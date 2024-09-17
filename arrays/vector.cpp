#include<iostream>
#include<vector>
using namespace std;

int main() {
    //Ways to create vector
    // vector<int> v;
    // vector<int> vec1 (5,0);

    vector<int> vec = {1, 2, 3, 4, 5};

    //Looping on vector (for-each)
    cout << "Vector Elements: \n";

    for(int val: vec) {
        cout << val << " "; }

    //Vector functions

    //size(): Return size of vector
    cout << "\nSize of vector: " << vec.size() << endl;

    //push_back(): Inserts element to end of vector
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);
    cout << "After push size: " << vec.size() << endl; 

    //pop_back(): Delete element from end of vector
    vec.pop_back();
    cout << "After pop size: " << vec.size() << endl;

    //Printing Vector
    cout << "\nVector Elements: \n";
    for(int val: vec) {
        cout << val << " "; }    

    //front(): Return first value of vector
    cout << "\nFront of vector: " << vec.front();

    //back(): Return last value of vector
    cout << "\nBack of vector: " << vec.back();

    //at(): Return ith value of vector
    cout << "\n3rd Index value: " << vec.at(3);    

    return 0;
}