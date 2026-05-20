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

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *lastNode = list1;
        
        if (!list1 && !list2) {
            return nullptr;
        }
        
        if (list1) {
            while (lastNode->next) {
                lastNode = lastNode->next;
            }
            lastNode->next = list2;
        }
        else {
            list1 = list2;
        }
        
        ListNode *sorter = list1;
        
        while (sorter) {
            ListNode* temp = sorter->next;
            while (temp) {
                if (sorter->val > temp->val) {
                    int num = sorter->val;
                    sorter->val = temp->val;
                    temp->val = num;
                }
                temp = temp->next;
            }
            sorter = sorter -> next;
        }
        
        return list1;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Solution sl;
    ListNode* list1 = new ListNode;
    ListNode* list2 = new ListNode;
    ListNode* p = list1;
    ListNode* q = list2;

    int nums1[2] = {-2,-10};
    int nums2[6] = {-9,-6,-3,-1,1,6};
    int i = 0;
    
    while (i < 1) {
        p->val = nums1[i];
        p->next = new ListNode();
        p = p->next;
        i++;
    }
    p->val = nums1[i];
    p->next = nullptr;
    i = 0;
    while (i < 5) {
        q->val = nums2[i];
        q->next = new ListNode();
        q = q->next;
        i++;
    }
    
    q->val = nums2[i];
    q->next = nullptr;
    
    ListNode* margedList = sl.mergeTwoLists(list1, list2);
    while (margedList) {
        cout << margedList->val << ",";
        margedList = margedList->next;
    }
    delete list1;
    delete list2;
    
    cout << endl;
    return EXIT_SUCCESS;
}
