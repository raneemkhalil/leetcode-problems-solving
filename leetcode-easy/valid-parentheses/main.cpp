//
//  main.cpp
//  leetcode
//
//  Created by Macbook on 4/19/26.
//

#include <iostream>
#include <string>

using namespace std;

class Stack {
private:
    char *items;
    int size;
    int top;
public:
    Stack() {
        this->size = 0;
        this->items = new char;
        this->top = -1;
    }
    Stack(int size):size(size), items(new char[size]) {}
    void push(char item) {
        this->items[++(this->top)] = item;
    }
    char pop() {
        return this->items[(this->top)--];
    }
    bool empty() {
        return this->top == -1;
    }
    void clear() {
        this->top = -1;
    }
    
    ~Stack(){}

};

class Solution {
    Stack st;
public:
    bool isValid(string s) {
        st = Stack(s.length());
        st.clear();
        for (int i = 0; i < s.length(); i++) {
            if (st.empty() && (s[i] == '(' || s[i] == '[' || s[i] == '{' )) {
                st.push(s[i]);
                continue;
            }
            else if (st.empty()) {
                return false;
            }
            else {
                char ch = st.pop();
                if(ch && s[i] - ch != 2 && s[i] - ch != 1){
                    st.push(ch);
                    st.push(s[i]);
                }
            }
        }
        return st.empty();
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Solution sl;
    string s = "{)}";
    
    cout << sl.isValid(s) << endl;
    return EXIT_SUCCESS;
}
