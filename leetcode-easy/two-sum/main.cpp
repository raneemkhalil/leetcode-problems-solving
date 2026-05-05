//
//  main.cpp
//  leetcode
//
//  Created by Macbook on 4/19/26.
//

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> values;
        
        for (int i = 0; i < nums.size(); i++) {
            int num = target - nums[i];
            if (values.count(num)) {
                return {values[num], i};
            }
            values[nums[i]] = i;
        }
        
        return {};
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Solution sl;
    vector<int>nums = {-3,4,3,90};
    int target = 0;
    
    vector<int> res = sl.twoSum(nums, target);
    
    for (int i:res) {
        cout << i << " ";
    }
    cout << endl;
    return EXIT_SUCCESS;
}
