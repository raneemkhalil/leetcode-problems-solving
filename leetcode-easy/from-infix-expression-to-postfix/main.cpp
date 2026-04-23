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
    char getTop() {
        return this->items[this->top];
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
    string isValid(string s) {
        st = Stack(s.length());
        string newString = "";
        st.clear();
        for (auto item:s) {
            if (0 <= item - '0' && item - '0' <= 9) {
                newString += item;
            }
            else if (!st.empty() && ((item == '+' && st.getTop() == '*') || (item == '-' && st.getTop() == '/'))) {
                newString += st.pop();
                st.push(item);
            }
            else if (item == '+' || item == '-' || item == '*' || item == '/') {
                st.push(item);
            }
            else if (item == ')') {
                newString += st.pop();
            }
            else if (item == '(') {
                continue;
            }
            else {
                return "invalid expresion";
            }
        }
        while (!st.empty()) {
            newString += st.pop();
        }
        return newString;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Solution sl;
    string s = "3+5*4";
    
    cout << sl.isValid(s) << endl;
    return EXIT_SUCCESS;
}
