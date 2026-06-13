//
//  main.cpp
//  leetcode
//
//  Created by Macbook on 4/19/26.
//

#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head){
            return head;
        }
        ListNode *p = head;
        ListNode *q = p;
        while (p->next != nullptr) {
            if(p->val != q->val) {
                p = q;
            }
            q = q->next;
            p->next = q;
        }
        
        return head;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Solution sl;
    const int size = 1;
    int nums[size] = {1};

    ListNode* head = new ListNode(nums[0]);
    ListNode* p = head;
    
    for (int i = 1; i < size; i++) {
        p->next = new ListNode(nums[i]);
        p = p->next;
    }
    ListNode* res = sl.deleteDuplicates(head);
    
    while (res != nullptr) {
        cout<< res->val << ", ";
        res = res->next;
    }
    delete head;
    cout << endl;
    return EXIT_SUCCESS;
}
