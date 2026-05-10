//
//  main.cpp
//  leetcode
//
//  Created by Macbook on 4/19/26.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string sub = "";
        int minSize = strs[0].length();
        
        for (int i = 1; i < strs.size(); i++) {
            if (minSize > strs[i].length()) {
                minSize = strs[i].length();
            }
        }
        for (int c = 0; c < minSize; c++) {
            int r = 0;
            char temp = NULL;
            for (; r < strs.size(); r++) {
                char ch = strs[r][c];
                if(temp && temp != ch) {
                    return sub;
                }
                if (temp) {
                    continue;
                }
                temp = ch;
            }
            sub += strs[r - 1][c];
        }

        return sub;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Solution sl;
    vector<string> strs = {"flower","flow","flight"};
    cout << sl.longestCommonPrefix(strs);
    cout << endl;
    return EXIT_SUCCESS;
}
