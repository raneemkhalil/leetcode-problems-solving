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
    int mySqrt(int x) {
        int s = 1;
        int e = x;
        
        while (s <= e) {
            int y = s + (e - s) / 2;
            if (y > x/y) {
                e = y - 1;
            }
            else {
                s = y + 1;
            }
        }
        return e;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Solution sl;
    int res = sl.mySqrt(17);

    cout << res << endl;
    return EXIT_SUCCESS;
}
