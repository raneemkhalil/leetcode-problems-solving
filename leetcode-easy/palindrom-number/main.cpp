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
    bool isPalindrome(int x) {
        int newNum = 0;
        int num = x;
        while (num) {
            newNum *= 10;
            newNum += num % 10;
            num = num / 10;
        }
        return newNum == x;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Solution sl;
    cout << sl.isPalindrome(12321);
    cout << endl;
    return EXIT_SUCCESS;
}
