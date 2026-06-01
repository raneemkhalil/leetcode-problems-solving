//
//  main.cpp
//  leetcode
//
//  Created by Macbook on 4/19/26.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0;
        while (i < nums.size() && nums[i] < target) {
            i++;
        }
        return i;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    Solution sl;
    vector<int> nums = {1,2,4};
    cout << sl.searchInsert(nums, 3);

    cout << endl;
    return EXIT_SUCCESS;
}
