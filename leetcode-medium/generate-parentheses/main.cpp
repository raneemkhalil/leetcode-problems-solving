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
    void generateValidParenthesis(vector<string> &res, string str, int num_closed, int num_opened) {
        char openedParenthesis = '(';
        char closedParenthesis = ')';
        if (num_closed == 0 && num_opened == 0) {
            res.push_back(str);
            return;
        }
        if (num_closed > num_opened) {
            generateValidParenthesis(res, str + closedParenthesis, num_closed - 1, num_opened);
        }
        if (num_opened > 0) {
            generateValidParenthesis(res, str + openedParenthesis, num_closed, num_opened - 1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        generateValidParenthesis(res, "", n, n);
        return res;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    Solution sl;
    for (string& str:sl.generateParenthesis(4)) {
        cout << str << endl;
    }
    cout << endl;
    return EXIT_SUCCESS;
}
