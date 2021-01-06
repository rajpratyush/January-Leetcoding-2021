class Solution:
    def deleteDuplicates(self, head: ListNode) -> ListNode:
        dummy = ListNode(0)
        dummy.next = head
        current = dummy
        while current.next and current.next.next:
            if current.next.val == current.next.next.val:
                tmp = current.next
                while tmp.next and tmp.val == tmp.next.val:
                    tmp = tmp.next
                tmp = tmp.next
                current.next = tmp
            else:
                current = current.next
        return dummy.next
