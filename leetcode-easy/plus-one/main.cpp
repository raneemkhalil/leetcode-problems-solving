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
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Solution sl;
    vector<int> digits = {9,9,9};
    vector<int> res = sl.plusOne(digits);
    for (int digit:res) {
        cout << digit << ",";
    }
    cout << endl;
    return EXIT_SUCCESS;
}
