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
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[k] != val) {
                k++;
                continue;
            }
            if (nums[i] == val) {
                continue;
            }
            int temp = nums[k];
            nums[k] = nums[i];
            nums[i] = temp;
            k++;
        }
        return k;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    Solution sl;
    vector<int> nums = {2};
    cout << sl.removeElement(nums, 3) << endl;
    for (int elem:nums) {
        cout<<elem<<", ";
    }
    cout << endl;
    return EXIT_SUCCESS;
}
