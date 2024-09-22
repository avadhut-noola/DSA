#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>& height) {
    int maxWater = 0; // ans
    int width, ht, currWater;

    //Complexity O(n^2)
    for (int i=0; i<height.size(); i++) { //Left bound
        for (int j= i+1; j<height.size(); j++) { //Right bound

            width = j-i;
            ht = min(height[i], height[j]);
            currWater = width * ht;

            maxWater = max (maxWater, currWater);
        }
    }
    return maxWater;    
}

int main() {
    vector<int> height= {1,8,6,2,5,4,8,3,7};
    cout << "Maximum water container capacity: " << maxArea(height);
    return 0;
}