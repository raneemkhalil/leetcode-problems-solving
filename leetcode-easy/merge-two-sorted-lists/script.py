class ListNode:
    def __init__(self, val: int=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:

        if not l1 and not l2:
            return None
        if l1:
            next_node: ListNode = l1
            while next_node.next:
                next_node = next_node.next
            next_node.next = l2
        else:
            l1 = l2

        sorter: ListNode = l1
        while sorter:
            temp = sorter.next
            while temp:
                if temp.val < sorter.val:
                    num: int = temp.val
                    temp.val = sorter.val
                    sorter.val = num
                temp = temp.next
            sorter = sorter.next
        return l1


if __name__ == '__main__':
    sol = Solution()
    l1 = ListNode()
    l2 = ListNode()

    list_nums = [-2,5]
    list_nums_2 = [-9,-6,-3,-1,1,6]

    curr = l1
    for num in list_nums:
        curr.next = ListNode(num)
        curr = curr.next

    curr = l2
    for num in list_nums_2:
        curr.next = ListNode(num)
        curr = curr.next

    merged = sol.mergeTwoLists(l1.next, l2.next)
    curr = merged
    while curr:
        print(curr.val)
        curr = curr.next