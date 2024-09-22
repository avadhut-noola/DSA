#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {

        int ht, width, currWater;
        int maxWater = 0; //ans
        int lp=0, rp=height.size()-1;
        
        //Complexity = O(n)
        while(lp < rp) {
            width = rp-lp;
            ht = min(height[lp], height[rp]); 
            currWater = width * ht;
            maxWater = max(maxWater, currWater);

            height[lp] < height[rp] ? lp++ : rp--;
        }

        return maxWater;
    }
};

int main() {
    Solution sol;
    vector<int> height= {1,8,6,2,5,4,8,3,7};
    
    cout << "Maximum water container capacity = " << sol.maxArea(height);
    return 0;
}