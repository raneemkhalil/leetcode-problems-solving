# Definition for singly-linked list.
from typing import Optional, List


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def delete_duplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head == None:
            return None
        p: ListNode = head
        q: ListNode = p
        while p.next != None:
            if p.val != q.val:
                p = q
            q = q.next
            p.next = q
        return head


if __name__ == '__main__':
    sol = Solution()
    nums: List[int] = [1,2,2,3,3]
    head: ListNode = ListNode(nums[0])
    p: ListNode = head
    for i in range(1, len(nums)):
        p.next = ListNode(nums[i])
        p = p.next

    res = sol.delete_duplicates(head)

    while res:
        print(res.val)
        res = res.next

